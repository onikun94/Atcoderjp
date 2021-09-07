S = input()
tar = "chokudai"

mod = 10 ** 9 + 7

dp = [[0 for _ in range(len(tar)+1)]for _ in range(len(S)+1)]

for i in range(len(S)+1):
    dp[i][0] = 1

for i in range(len(S)):
    for j in range(len(tar)):
        if S[i] != tar[j]:
            dp[i+1][j+1] = dp[i][j+1]
        if S[i] == tar[j]:
            dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod

print(dp)
print(dp[len(S)][8])
