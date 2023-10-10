def solve():
    arg = input().split()
    s, d, k = int(arg[0]), int(arg[1]), int(arg[2])

    b = (s + d)*2
    p = s + d * 2

    if (p >= k and b >= k + 1):
        return True
    else:
        return False


with open("A_output.txt", "w") as file:
    t = int(input())
    for i in range(t):
        if solve():
            # print(f"Case #{i+1}: YES")
            file.write(f"Case #{i+1}: YES\n")
        else:
            # print(f"Case #{i+1}: No")
            file.write(f"Case #{i+1}: NO\n")
