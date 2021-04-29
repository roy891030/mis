n = int(input("Please input n:"))
for i in range(1, n+1, 1):
    for j in range(1, n+1, 1):
        print("%3d" % (i*j), sep="", end="")
    print("\n")

