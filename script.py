import os, json, hashlib

dir_path = ".cph"
old_base = "/mnt/windows/Coding/CodeForces"
new_base = "/home/rohan-danny-skaria/Codeforces"

for file in os.listdir(dir_path):
    full = os.path.join(dir_path, file)

    try:
        with open(full, "r") as f:
            data = json.load(f)
    except (json.JSONDecodeError, ValueError, OSError) as e:
        print(f"skipping unreadable: {file}  ({e.__class__.__name__})")
        continue

    if "srcPath" not in data:
        continue

    old_path = data["srcPath"]

    # Delete any file whose srcPath is a Windows path
    if "c:\\" in old_path.lower() or "c:/" in old_path.lower():
        os.remove(full)
        print(f"deleted (windows path): {file}")
        continue

    # Rewrite path if it matches the old Linux base
    if old_path.startswith(old_base):
        new_path = new_base + old_path[len(old_base):]
    else:
        new_path = old_path

    data["srcPath"] = new_path

    with open(full, "w") as f:
        json.dump(data, f, separators=(",", ":"))

    basename = os.path.basename(new_path)
    new_hash = hashlib.md5(new_path.encode()).hexdigest()
    new_filename = f".{basename}_{new_hash}.prob"
    new_full = os.path.join(dir_path, new_filename)

    if full != new_full:
        os.rename(full, new_full)
        print(f"{file}  ->  {new_filename}")