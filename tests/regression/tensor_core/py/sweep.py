import json
import itertools
import argparse
import os
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument("--experiment_dir", type=str)
parser.add_argument("--params_file", type=str )

args = parser.parse_args()

def load_json(file_path):
    with open(file_path, 'r') as file:
        data = json.load(file)
    return data

def save_json(file_path, data):
    with open(file_path, 'w') as file:
        json.dump(data, file, indent=4)

parameters = {
    "num_threads": [4, 8, 16, 32],
    "num_dot_units": [1 ,2 , 4, 8]
}

def get_outer_product_size(num_threads, num_dot_units):
    total_regs = 32
    b_cols =1
    c_regs = int(num_threads/num_dot_units)**2/num_threads
    from math import floor
    a_rows = max(1,floor((total_regs-b_cols)/(1 + c_regs*b_cols)))
    return a_rows, b_cols

def is_valid_config(num_threads, num_dot_units):
    return int(num_threads/num_dot_units)**2 >= num_threads

def parameter_sweep(params, constraint_fn):
    keys, values = zip(*params.items())
    all_combinations = [dict(zip(keys, combination)) for combination in itertools.product(*values)]
    valid_combinations = [combo for combo in all_combinations if constraint_fn(**combo)]
    return valid_combinations

def vanilla_sweep():
    json_file_path = args.params_file  # Replace with your JSON file path
    json_data = load_json(json_file_path)

    valid_combinations = parameter_sweep(parameters, is_valid_config)

    for _, combo in enumerate(valid_combinations):
        for key,value in combo.items():
            json_data[key] = value
        json_data["A_ROWS"],json_data["B_COLS"] = get_outer_product_size(json_data["num_threads"], json_data["num_dot_units"])


        # create directory
        cwd = os.getcwd()
        out_dir = os.path.join(args.experiment_dir, f"th{json_data['num_threads']}du{json_data['num_dot_units']}")
        os.makedirs(out_dir, exist_ok=True)
        json_data["define_file"]  = cwd + '/defines.txt' 
        # save json file
        output_file_path = out_dir + "/config.json"
        save_json(output_file_path, json_data)
        print(f'Saved {output_file_path}')
        # Build simx & kernel
        cmd = f"python py/config.py --config {output_file_path}"
        subprocess.run(cmd , shell=True, check=True)
        tc_defines = ""
        with open('defines.txt', 'r')as f :
            tc_defines = f.read()

        cmds = []
        cmds.append(f"cd ../../../runtime/simx && make clean && CONFIGS=\"{tc_defines}\" make")
        #cmds.append(f"cd {cwd}")
        cmds.append("make clean-all")
        cmds.append(f"make EXTFLAGS+=\"{tc_defines}\"")
        cmds.append(f"make asm EXTFLAGS+=\"{tc_defines}\"" )
        cmds.append(f"cp kernel.s {out_dir}/.")
        cmds.append(f"cp defines.txt {out_dir}/.")
        # run simx | tee experiment_dir
        cmds.append(f"make run-simx | tee {out_dir}/out.log")
        # cp files into folder
        cmds.append(f"cp statistic.txt {out_dir}/.")
        for cmd in cmds:
            try:
                subprocess.run(cmd , shell=True, check=True)
                print(f"Command run successuflly: {cmd}")
            except subprocess.CalledProcessError as e :
                print(f"Command ({cmd}) failed with err: {e}")

vanilla_sweep()
# Cooperative group sweep
