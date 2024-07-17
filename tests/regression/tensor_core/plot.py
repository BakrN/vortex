import pandas as pd
import matplotlib.pyplot as plt

# Load the CSV file
csv_file_path = 'statistic.txt'  # Replace with your CSV file path
df = pd.read_csv(csv_file_path)

# Plot the data
plt.figure(figsize=(10, 6))

# Loop through each unique stat_name and plot its data
for stat_name in df['stat_name'].unique():
    stat_data = df[df['stat_name'] == stat_name]

    total_sum = stat_data['sum'].sum()
    total_sum_mean = stat_data['sum'].mean()
    total_sum_min = stat_data['sum'].min()
    total_sum_max = stat_data['sum'].max()
    total_sum_median = stat_data['sum'].median()
    print(f"{stat_name}: sum: {total_sum}, Total sum mean: {total_sum_mean} ,Total sum median: {total_sum_median} Total sum min: {total_sum_min}, Total sum max: {total_sum_max}")

    plt.scatter(stat_data['timestamp'], stat_data['sum'], marker='o', linestyle='-', label=stat_name)
#plt.plot(df['timestamp'], df['sum'], marker='o', linestyle='-')
plt.xlabel('Timestamp')
plt.ylabel('Sum')
plt.title('Timestamp vs Sum')
plt.grid(True)
plt.xticks(rotation=45)
plt.legend(title='Stat Name', bbox_to_anchor=(1.05, 1), loc='upper left')  # Add a legend with a title
plt.tight_layout()

# Show the plot
plt.show()
