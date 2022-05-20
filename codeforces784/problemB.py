t = int(input())
 
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    ind = -1
    count = {}
    for i in range(n):
        if arr[i] not in count:
            count[arr[i]] = 1
        else:
            count[arr[i]]+=1
            if count[arr[i]] ==3:
                ind = i
                break
    if ind==-1:
        print(-1)
    else:
        print(arr[ind])