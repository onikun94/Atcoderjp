L,R = map(int, input().split())
L = L-1
R = R-1
S = input()
part = S[L:R+1]
rev = part[::-1]
ans =S.replace(part, rev)
print(ans)