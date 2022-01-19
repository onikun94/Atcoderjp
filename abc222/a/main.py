N = input()
ans = N
for i in range(4-len(N)):
    ans = '0'+ans
print(ans)