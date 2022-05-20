t = int(input())
 
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
 
    if len(set(arr)) == len(arr) and 0 not in arr:
        print(n+1)
        continue
    if len(set(arr)) < len(arr) and 0 not in arr:
        print(n)
        continue
    cnt = 0
    for i in arr:
        if i==0:
            cnt+=1
    print(n-cnt)