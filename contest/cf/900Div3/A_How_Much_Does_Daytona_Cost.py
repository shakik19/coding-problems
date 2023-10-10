#   source: https://codeforces.com/contest/1878/problem/A

def solve():
    arg = input().split()
    a, k = arg[0], str(arg[1])
    s = input().split()
    if k in s:
        print("YES")
    else:
        print("NO")


t = int(input())
for _ in range(t):
    solve()
