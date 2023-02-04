def compare_logs(file1, file2):
    with open(file1, "r") as f1, open(file2, "r") as f2:
        file1 = set([line.split(" ")[-1].strip() for line in f1])
        file2 = set([line.split(" ")[-1].strip() for line in f2])
        
        print("\033[34mDifferences in file1 but not in file2:\033[0m")
        for log in file1 - file2:
            if log.endswith(".exe"):
                print("\033[31m" + log + "\033[0m")
            else:
                print("\033[33m" + log + "\033[0m")
            
        print("\n\033[34mDifferences in file2 but not in file1:\033[0m")
        for log in file2 - file1:
            if log.endswith(".exe"):
                print("\033[31m" + log + "\033[0m")
            else:
                print("\033[33m" + log + "\033[0m")

compare_logs("file1.log", "file2.log")
