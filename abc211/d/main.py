INF = 1 << 60
N, M = map(int, input().split())
A = []
B = []

for i in range(M):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

print(INF)
print(A, B)
