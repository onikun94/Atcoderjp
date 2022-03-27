N = int(input())
A = list(map(int,input().split()))
X = int(input())
sum_A = sum(A)
use = X // sum_A
ans = N* use
S = use * sum_A
for i in range(N):
    S += A[i]
    ans += 1
    if S > X:
        break
    
print(ans)