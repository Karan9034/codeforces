t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    ans = 0
    if n==1:
        print(1)
        continue
    if n==2:
        print(2)
        continue
    for i in range(n):
        tmp = s[0:i]+s[i+1:n]
        palindrome = (tmp == tmp[::-1])
        if palindrome == True:
            ans += 1
    print(ans)