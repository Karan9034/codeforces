n, x = input().split()
n = int(n)

def solve(n, x):
    ans = 0
    max_x =0
    if n < len(x):
        return -1
    while n != len(x):
        if max_x!=9:
            max_x = max(max(list(map(int, [i for i in x]))), max_x)
        if max_x == 1:
            return -1
        x = str(int(x)*max_x)
        ans+=1
    return ans

print(solve(n, x))