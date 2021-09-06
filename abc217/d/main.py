import bisect
L, Q = map(int, input().split())
C = []
X = []
for i in range(Q):
    c, x = map(int, input().split())
    C.append(c)
    X.append(x)
ans = [L]
for i in range(Q):
    if C[i] == 1:
        total = 0
        for j in ans:
            total += j
            if total > X[i]:
                right = total - X[i]
                left = j - right
                ans.insert(ans.index(j), left)
                ans.insert(ans.index(j), right)
                ans.remove(j)
                break
            else:
                continue

    elif C[i] == 2:
        plus = 0
        for j in ans:
            plus += j
            if plus > X[i]:
                print(j)
                break
