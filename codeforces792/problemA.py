t = int(input())

for _ in range(t):
    n = input()
    if(len(n)==2):
        print(int(n[1]))
        continue
    arr = list(map(int, [i for i in n]))
    print(min(arr))