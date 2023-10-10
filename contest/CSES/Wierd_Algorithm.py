#   Source: https://cses.fi/problemset/task/1068

def solve(n):
    if n == 1:
        print(n)
        return
    if n & 1 == 1:
        print(n, end=" ")
        solve(n * 3 + 1)
    else:
        print(n, end=" ")
        solve(int(n / 2))


n = int(input())
solve(n)
