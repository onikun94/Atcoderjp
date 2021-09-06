S, T = map(str, input().split())
for i in range(10):
    if i >= len(S):
        print("Yes")
        break
    if i >= len(T):
        print("No")
        break
    if S[i] > T[i]:
        print("No")
        break
    elif S[i] == T[i]:
        continue
    else:
        print("Yes")
        break
