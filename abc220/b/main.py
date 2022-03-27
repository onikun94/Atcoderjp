def toTen(X,k):
    length = len(X)
    ten = 0
    for i in range(length):
        ten += k**i * int(X[i])
    return ten
K = int(input())
A,B = input().split()
A = A[::-1]
B = B[::-1]
ans = toTen(A, K)*toTen(B, K)
print(ans)