
def main():
    n, W = map(int, input().split())
    Value = []
    Weight = []
    dp = [[0] * W for i in range(n)]
    # print(dp)

    for i in range(n):
        v, w = map(int, input().split())
        Value.append(v)
        Weight.append(w)

    for i in range(n):
        for w in range(W):
            if w >= Weight[i]:
                dp[i+1][w] = max(dp[i][w-Weight[i]]+Value[i], dp[i][w])
            else:
                dp[i+1][w] = dp[i][w]
        print('i = ', i)
        print(dp)


if __name__ == '__main__':
    main()
