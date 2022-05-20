t = int(input())
 
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    a = arr[0]
    b = arr[n-1]
    l=0
    r=n-1
    count = 0
    while l<r:
        if a==b:
            count = max(count, l+1+n-r)
        if a<=b:
            l+=1
            a+=arr[l]
        if a>b:
            r-=1
            b+=arr[r]
    print(count)
