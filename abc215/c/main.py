import itertools
S = input()
K = int(input())
count = 0
data = set()
for nums in itertools.permutations(range(len(S))):
    print("nums = ", nums)
    tmp = ""
    for i in range(len(nums)):
        print("i = ", i)
        tmp = tmp + S[nums[i]]
        data.add(tmp)

ans = list(data)
print("ans = ", ans)
ans.sort()

print(ans[K-1])
