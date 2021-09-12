import string
P = list(map(int, input().split()))
alp = list(string.ascii_lowercase)
ans = ''
for i in P:
    ans += alp[i-1]

print(ans)
