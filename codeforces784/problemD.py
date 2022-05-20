t = int(input())
 
for _ in range(t):
    n = int(input())
    lst = input().split('W')
    ans = False
    for s in lst:
        a = 'R' in s
        b = 'B' in s
        if a^b:
            ans = True
    print('NO' if ans else "YES")