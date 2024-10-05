# combine.csv
import subprocess
import os
import pandas as pd

class ExpInfo:
    def __init__(self) :
        self.threads = 0
        self.mac_units = 0
        self.ibuf_stalls = 0
        self.scrb_stalls = 0
        self.IPC = 0
        self.instrs = 0
        self.cycles = 0
        self.tc_util = 0 
        self.warp_group_size = 0 
    @classmethod
    def from_file(cls, file_name):
        info = cls()
        info.ibuf_stalls = int(subprocess.check_output(f"tail -n 4 {file_name} | grep -oP \"Ibuf stalls: \\K\\w+\"", shell=True))
        info.scrb_stalls = int(subprocess.check_output(f"tail -n 4 {file_name} | grep -oP \"scrb stalls: \\K\\w+\"", shell=True))
        info.IPC         = int(subprocess.check_output(f"tail -n 4 {file_name} | grep -oP \"IPC=\\K\\w+\"", shell=True))
        info.instrs      = int(subprocess.check_output(f"tail -n 4 {file_name} | grep -oP \"instrs=\\K\\w+\"", shell=True))
        info.cycles      = int(subprocess.check_output(f"tail -n 4 {file_name} | grep -oP \"cycles=\\K\\w+\"", shell=True))
        return info
    def name(self):
        return f"{self.threads}t{self.mac_units}du"


# Cycles and timings
header = "exp_name,threads,dot_units,warp_group_size,ibuf_stalls,scrb_stalls,ipc,instrs,cycles"
with open("combined_info.csv", "w") as f :
    dirs = [x[1] for x in os.walk(os.getcwd())][0]
    csv_file_path = f"{dirs[0]}/statistic.txt"
    df = pd.read_csv(csv_file_path)
    for stat_name in df['stat_name'].unique():
        header += f",{stat_name}_mean,{stat_name}_median"
    f.write(f"{header}\n")

    for exp in dirs:
        print(exp)
        th, r = exp.split("th")[1].split("du")# .split("
        du, group_size = r.split("wg")
        info = ExpInfo.from_file(f"{exp}/out.log")
        info.threads = int(th)
        info.mac_units = int(du)
        info.warp_group_size = int(group_size)
        # Run to get median and mean here
        csv_file_path = f"{exp}/statistic.txt"
        df = pd.read_csv(csv_file_path)
        
        f.write(f"{info.name()},{info.threads},{info.mac_units},{info.warp_group_size},{info.ibuf_stalls},{info.scrb_stalls},{info.IPC},{info.instrs},{info.cycles}")
        for stat_name in df['stat_name'].unique():
            stat_data = df[(df['stat_name'] == stat_name)]
            stat_data = stat_data[stat_data['timestamp'] <= info.cycles]
            total_sum_mean = stat_data['sum'].mean()
            total_sum_median = stat_data['sum'].median()
            f.write(f",{total_sum_mean},{total_sum_median}")
        f.write("\n")


