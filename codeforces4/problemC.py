n = int(input())
 
dc = {}
 
for _ in range(n):
    s = input()
    if s not in dc.keys():
        dc[s] = 0
        print('OK')
    else:
        dc[s]+=1
        print(s+str(dc[s]))