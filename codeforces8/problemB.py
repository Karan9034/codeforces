arr = [(0, 0)]
x = y = 0
ans = True
for i in input():
    if i =='L': x-=1
    if i =='R': x+=1
    if i =='D': y-=1
    if i =='U': y+=1
    if (x, y) in arr:
        ans = False
        break
    arr.append((x, y))
    if (x-1, y) in arr and i!='R':
        ans = False
        break
    if (x+1, y) in arr and i!='L':
        ans = False
        break
    if (x, y-1) in arr and i!='U':
        ans = False
        break
    if (x, y+1) in arr and i!='D':
        ans = False
        break

if ans:
    print("OK")
else:
    print("BUG")