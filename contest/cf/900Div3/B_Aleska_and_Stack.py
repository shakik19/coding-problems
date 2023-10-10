# Source: https://codeforces.com/contest/1878/problem/B

def solve():
    n = int(input())
    x = 1
    for _ in range(n):
        print(x, end=" ")
        x += 2
    print()


t = int(input())
for _ in range(t):
    solve()
