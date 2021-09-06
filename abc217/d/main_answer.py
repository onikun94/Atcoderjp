import bisect
import array

l, Q = map(int, input().split())

L = array.array("i", [0, l])

for i in range(Q):
    c, x = map(int, input().split())
    if c == 1:
        bisect.insort(L, x)
    else:
        point = bisect.bisect(L, x)
        res = L[point] - L[point - 1]
        print(res)
