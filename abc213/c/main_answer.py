H, W, N = map(int, input().split())
AS = []
BS = []

for i in range(N):
    A, B = map(int, input().split())
    AS.append(A)
    BS.append(B)

Xdict = {x: i+1 for i, x in enumerate(sorted(list(set(AS))))}
Ydict = {y: i+1 for i, y in enumerate(sorted(list(set(BS))))}

for i in range(N):
    print(Xdict[AS[i]], Ydict[BS[i]])

# setでソートされない場合
# 入力
# 1
# 10
# 100
# 1000
# 10000
# 100000
# 1000000
# 10000000
# 100000000
# 1000000000

# test = list(set(AS))
# test1 = sorted(list(set(AS)))
# print("test = ", test)
# print("test1 = ", test1)

# 出力
# test =  [100000, 1, 1000000, 10000000, 100, 100000000, 1000000000, 1000, 10, 10000]
