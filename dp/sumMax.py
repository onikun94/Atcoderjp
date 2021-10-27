
def main():
    n = int(input())
    A = []
    dp = [0] * 100
    for i in range(n):
        a = int(input())
        A.append(a)

    for i in range(n):
        dp[i+1] = max(dp[i], dp[i]+A[i])
    print(dp[n])


if __name__ == '__main__':
    main()
