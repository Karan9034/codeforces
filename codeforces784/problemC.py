t = int(input())
 
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    e = True
    for i in range(n-2):
        if arr[i]%2==0 and arr[i+2]%2==0:
            pass
        elif arr[i]%2==1 and arr[i+2]%2==1:
            pass
        else:
            e = False
    if e:
        print('YES')
    else:
        print('NO')