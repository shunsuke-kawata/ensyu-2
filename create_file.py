import subprocess

for file_name in range(1,16):
    cpp_name = f"ensyu{file_name}.cpp"
    subprocess.run(['touch', cpp_name])