N, M = map(int, input().split())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

ans1 = 0
ans2 = ''

if max(A) > max(B):
    ans1 = max(B)
    ans2 = 'A'
else:
    ans1 = max(A)
    ans2 = 'B'

ans = 1000000000
if ans2 == 'A':
    for i in A:
        ans = min(ans, abs(ans1 - i))
elif ans2 == 'B':
    for i in B:
        ans = min(ans, abs(ans1-i))

print(ans)
