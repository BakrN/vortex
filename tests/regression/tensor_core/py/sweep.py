import json
import itertools
import argparse
import os
import subprocess
import math

parser = argparse.ArgumentParser()
parser.add_argument("--experiment_dir", type=str)
parser.add_argument("--params_file", type=str )

# Different experiment types
parser.add_argument("--vanilla", action='store_true')
parser.add_argument("--rf_exp", action='store_true')
parser.add_argument("--warp_exp", action='store_true')
parser.add_argument("--decouple", action='store_true')
parser.add_argument("--outer_product", action='store_true')
parser.add_argument("--vary", action='store_true')
parser.add_argument("--mm_size", action='store_true')

args = parser.parse_args()

def load_json(file_path):
    with open(file_path, 'r') as file:
        data = json.load(file)
    return data

def save_json(file_path, data):
    with open(file_path, 'w') as file:
        json.dump(data, file, indent=4)

vanilla_parameters = {
    "num_threads": [4, 8, 16, 32],
    "num_dot_units": [1 ,2 , 4, 8]
}

warp_parameters = {
    "num_warps": [1, 2, 3, 4, 5, 6,7, 8],
    "num_threads": [32] ,
    "num_dot_units": [4],
    "issue_width": [4]
}

decouple_parameters = {
        "num_threads": [16],
        "num_dot_units": [1,2 ,4],
}


warp_group_vary_parameters ={
        "num_threads": [32] ,
        "num_dot_units": [4],
        "warp_group_size": [2, 4 ,8]
}

vary_mm_size = {
        "K": [64, 128,256, 512, 1024, 2048, 4096]
}


def outer_exp_constraint(num_threads, num_dot_units,a_rows):
    # (32 regs for dot_units 1, 2 and 64 for dot unit 5 )
    pass

def get_outer_product_size(num_threads, num_dot_units, total_regs = 32):
    b_cols =1
    c_regs = int(num_threads/num_dot_units)**2/num_threads
    from math import floor
    a_rows = max(1,floor((total_regs-b_cols)/(1 + c_regs*b_cols)))
    return a_rows, b_cols

def is_valid_config(num_threads, num_dot_units):
    return int(num_threads/num_dot_units)**2 >= num_threads

def parameter_sweep(params, constraint_fn=None):
    keys, values = zip(*params.items())
    all_combinations = [dict(zip(keys, combination)) for combination in itertools.product(*values)]
    if constraint_fn:
        valid_combinations = [combo for combo in all_combinations if constraint_fn(**combo)]
    else :
        valid_combinations = all_combinations
    return valid_combinations

def vanilla_sweep():
    json_file_path = args.params_file  # Replace with your JSON file path
    json_data = load_json(json_file_path)

    valid_combinations = parameter_sweep(vanilla_parameters, is_valid_config)

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

def decouple_sweep():
    json_file_path = args.params_file  # Replace with your JSON file path
    json_data = load_json(json_file_path)
    valid_combinations = parameter_sweep(decouple_parameters, is_valid_config)

    for _, combo in enumerate(valid_combinations):
        for key,value in combo.items():
            json_data[key] = value
        # use same outer product sizes as in vanilla sweep
        json_data["A_ROWS"],json_data["B_COLS"] = get_outer_product_size(json_data["num_threads"], json_data["num_dot_units"])

        # Make sure A_ROWS*B_COLS*THREAD_N % warp_group_size = constraint (assume B_cols
        if (json_data["A_ROWS"] == 15):
            json_data["A_ROWS"] = 16
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

def outer_sweep():
    #educated guess by me: (prediction by me limit to 32 regs for 1 2 dot units) and then scale to 64 regs for 4 dot unit case
    json_file_path = args.params_file  # Replace with your JSON file path
    json_data = load_json(json_file_path)
    valid_combinations = parameter_sweep(decouple_parameters, is_valid_config)

    for _, combo in enumerate(valid_combinations):
        for key,value in combo.items():
            json_data[key] = value
        # vary outer product based on educated guess by me (fully utilize the 32 regs)

        json_data["A_ROWS"],json_data["B_COLS"] = get_outer_product_size(json_data["num_threads"], json_data["num_dot_units"])
        if (json_data["A_ROWS"] == 15): # 3rd
            json_data["A_ROWS"] = 8
            json_data["B_COLS"] = 8
        elif (json_data["A_ROWS"] == 1):
            #discard for 64 case
            continue
            json_data["A_ROWS"] = 2
            json_data["B_COLS"] = 1
        else:
            json_data["A_ROWS"] = 4
            json_data["B_COLS"] = 4

        # create directory
        cwd = os.getcwd()
        out_dir = os.path.join(args.experiment_dir, f"th{json_data['num_threads']}du{json_data['num_dot_units']}reg64")
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


    pass

def warp_group_sweep():
    regs = [32, 64, 128] 
    outer_size = {'32': (8,2), '64': (8,4), '128':(16,4) }
    json_file_path = args.params_file  # Replace with your JSON file path
    json_data = load_json(json_file_path)
    valid_combinations = parameter_sweep(warp_group_vary_parameters)
    # do it for 32 , 64 and 128
    for _, combo in enumerate(valid_combinations):
        for reg in regs: 
            for key,value in combo.items():
                json_data[key] = value
            json_data["A_ROWS"],json_data["B_COLS"] = outer_size[str(reg)]

            # create directory
            cwd = os.getcwd()
            out_dir = os.path.join(args.experiment_dir, f"reg{reg}wg{json_data['warp_group_size']}")
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

def issue_width_sweep():
    json_file_path = args.params_file  # Replace with your JSON file path
    json_data = load_json(json_file_path)

    #valid_combinations = [{"num_threads": 16, "num_dot_units": 4, "issue_width": 1}, {"num_threads": 16, "num_dot_units": 4, "issue_width": 2}, {"num_threads": 16, "num_dot_units": 4, "issue_width": 4}]#, {"num_threads": 32, "num_dot_units": 4, "issue_width": 1}, {"num_threads": 32, "num_dot_units": 4, "issue_width": 2}, {"num_threads": 32, "num_dot_units": 4, "issue_width": 4},  {"num_threads": 16, "num_dot_units": 2, "issue_width": 1}, {"num_threads": 16, "num_dot_units": 2, "issue_width": 2}, {"num_threads": 16, "num_dot_units": 2, "issue_width": 4},{"num_threads": 8, "num_dot_units": 1, "issue_width": 1}]

    #valid_combinations = [{"num_threads": 32, "num_dot_units": 4, "issue_width": 1}, {"num_threads": 32, "num_dot_units": 4, "issue_width": 2}, {"num_threads": 32, "num_dot_units": 4, "issue_width": 4}]
    #valid_combinations = [{"num_threads": 16, "num_dot_units": 2, "issue_width": 1}, {"num_threads": 16, "num_dot_units": 2, "issue_width": 2}, {"num_threads": 16, "num_dot_units": 2, "issue_width": 4},{"num_threads": 8, "num_dot_units": 1, "issue_width": 1}]
    for _, combo in enumerate(valid_combinations):
        for key,value in combo.items():
            json_data[key] = value

        # create directory
        cwd = os.getcwd()
        out_dir = os.path.join(args.experiment_dir, f"th{json_data['num_threads']}du{json_data['num_dot_units']}iw{json_data['issue_width']}")
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


def warp_sweep():
    json_file_path = args.params_file  # Replace with your JSON file path
    json_data = load_json(json_file_path)

    valid_combinations = parameter_sweep(warp_parameters)

    for _, combo in enumerate(valid_combinations):
        for key,value in combo.items():
            json_data[key] = value

        # create directory
        cwd = os.getcwd()
        out_dir = os.path.join(args.experiment_dir, f"th{json_data['num_threads']}du{json_data['num_dot_units']}w{json_data['num_warps']}")
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

def mm_sweep():
    json_file_path = args.params_file  # Replace with your JSON file path
    json_data = load_json(json_file_path)

    valid_combinations = parameter_sweep(vary_mm_size)

    for _, combo in enumerate(valid_combinations):
        for key,value in combo.items():
            json_data[key] = value

        # create directory
        cwd = os.getcwd()
        out_dir = os.path.join(args.experiment_dir, f"k{json_data['K']}")
        os.makedirs(out_dir, exist_ok=True)
        json_data["define_file"]  = cwd + '/defines.txt'
        # save json file
        output_file_path = out_dir + "/config.json"
        save_json(output_file_path, json_data)
        print(f'Saved {output_file_path}')
        # Build simx & kernel
        cmd = f"python py/config.py --config {output_file_path} --generate_gemm" # disable gemm generation
        subprocess.run(cmd , shell=True, check=True)
        tc_defines = ""
        with open('defines.txt', 'r')as f :
            tc_defines = f.read()

        cmds = []
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




if args.vanilla:
    vanilla_sweep()

elif args.decouple:
    decouple_sweep()
elif args.outer_product:
    outer_sweep()
elif args.vary:
    # do an 8-2
    warp_group_sweep()
elif args.rf_exp:
    issue_width_sweep()
elif args.warp_exp:
    warp_sweep()
elif args.mm_size: 
    mm_sweep()







# Cooperative group sweep
