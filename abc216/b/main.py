N = int(input())
S = []
T = []
for i in range(N):
    s, t = map(str, input().split())
    S.append(s)
    T.append(t)

count = 0
for i in range(N):
    for j in range(N):
        if j > i:
            if S[i] == S[j] and T[i] == T[j]:
                count += 1

print('Yes') if count > 0 else print('No')
