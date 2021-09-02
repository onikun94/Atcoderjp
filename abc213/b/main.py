N = int(input())
A = list(map(int, input().split()))
ans = sorted(A)
print(A.index(ans[N-2])+1)
