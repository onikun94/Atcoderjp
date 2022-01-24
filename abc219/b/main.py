S1 = input()
S2 = input()
S3 = input()
S = []
S.append(S1)
S.append(S2)
S.append(S3)
T = input()
ans = ""
for i in range(len(T)):
    ans += S[int(T[i])-1]

print(ans)