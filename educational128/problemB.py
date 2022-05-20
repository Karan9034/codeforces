t = int(input())

def check(n, m, arr):
    pr = []
    for i in range(n):
        for j in range(m):
            if arr[i][j] == 'R' and not pr:
                pr.append(i)
                pr.append(j)
                continue
            if arr[i][j] == 'R' and ((i < pr[0] and j > pr[1]) or (i > pr[0] and j < pr[1])):
                return "NO"
    return "YES"


for _ in range(t):
    n, m = list(map(int, input().split()))
    arr = []
    for i in range(n):
        arr.append([i for i in input()])
    print(check(n, m, arr))