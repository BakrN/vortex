import os
import shutil
import argparse
import subprocess

parser = argparse.ArgumentParser(description="Process files in the source directory and move them to the output directory.")
parser.add_argument("--source_dir", help="The source directory containing the subdirectories with kernel.s and defines.txt.")
parser.add_argument("--output_dir", help="The output directory where processed files will be moved.")


def run_bash_script(kernel_file, defines_file):
    """
    Runs the bash script using the kernel.s and defines.txt files.
    """
    # Assuming the bash script is named 'process_files.sh' and located in the current directory.
    # Modify this path if the bash script is in another location.
    bash_script = f"./build_experiment.sh {defines_file} {kernel_file} "

    #print (bash_script)
    # Run the bash script with the kernel and defines files as arguments.
    subprocess.call(bash_script, shell=True)


def move_files(source_subdir, output_subdir):
    """
    Moves the required files from the source subdirectory to the output subdirectory.
    """
    # List of files to move
    files_to_move = ["out.log", "statistic.txt", "kernel.s", "defines.txt"]

    # Ensure the output subdirectory exists
    if not os.path.exists(output_subdir):
        os.makedirs(output_subdir)

    # Move each file to the output directory
    for file_name in files_to_move:
        source_file = file_name
        cpy  = True
        if file_name not in ["out.log" , "statistic.txt"]:
            source_file = os.path.join(source_subdir, file_name)
        else:
            cpy = False
        if os.path.exists(source_file):
            if cpy:
                shutil.copy(source_file, os.path.join(output_subdir, file_name))
            else:
                shutil.move(source_file, os.path.join(output_subdir, file_name))

def main(source_dir, output_dir):
    """
    Main function to process the directories and files.
    """
    # Traverse the source directory recursively
    print ("Source directory {source_dir}, Output director: {output_dir}")
    for root, dirs, files in os.walk(source_dir):
        # Check if the necessary files are present in the current subdirectory
        if "kernel.s" in files and "defines.txt" in files:
            # Get the relative folder name
            relative_path = os.path.relpath(root, source_dir)
            output_subdir = os.path.join(output_dir, relative_path)

            # Ensure that the output subdirectory exists
            if not os.path.exists(output_subdir):
                os.makedirs(output_subdir)

            # Get paths for the kernel.s and defines.txt files
            kernel_file = os.path.join(root, "kernel.s")
            defines_file = os.path.join(root, "defines.txt")


            # Call the bash script
            run_bash_script(kernel_file, defines_file)

            # Move the necessary files to the output subdirectory
            move_files(root, output_subdir)
            print(f"Finished processing experiment {relative_path}")

    # Finally, copy combine.py to the output directory
    combine_py_source = os.path.join(source_dir, "combine.py")
    if os.path.exists(combine_py_source):
        shutil.copy(combine_py_source, output_dir)

    print(f"Files processed for figure {source_dir}. Now running combine.py in the output directory.")

    # Change directory to the output directory
    os.chdir(output_dir)

    # Run python combine.py in the output directory
    subprocess.run(["python", "combine.py"])

    print("combine.py executed.")




args = parser.parse_args()

# Call the main function with parsed arguments
main(args.source_dir, args.output_dir)
