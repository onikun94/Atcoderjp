import itertools
S, k = map(str, input().split())
K = int(k)
count = 0
data = set()
dic = []
for nums in itertools.permutations(range(len(S))):
    dic.append(nums)
dicans = []
for i in dic:
    word = ""
    for j in i:
        word += S[j]
    dicans.append(word)
dicans.sort()
ans = list(dict.fromkeys(dicans))
print(ans)
print(ans[K-1])
