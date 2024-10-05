import pandas as pd

# Load the CSV file
input_file = 'statistic.txt'
df = pd.read_csv(input_file)

# Filter rows where stat_name is 'cluster0-shared_mem0.reads'
reads_df = df[df['stat_name'] == 'cluster0-shared_mem0.reads']

# Write the filtered data to reads.csv
reads_output_file = 'reads.csv'
reads_df.to_csv(reads_output_file, index=False)

# Filter rows where stat_name is 'core.tensor_core.mac_fire'
mac_fire_df = df[df['stat_name'] == 'core.tensor_core.mac_fire']

# Write the filtered data to mac_fire.csv
mac_fire_output_file = 'mac_fire.csv'
mac_fire_df.to_csv(mac_fire_output_file, index=False)
