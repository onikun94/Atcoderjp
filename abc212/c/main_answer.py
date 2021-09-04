import bisect


def ans():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    B.sort()

    INF = float('INF')
    ans = INF
    for a in A:
        i = bisect.bisect_left(B, a)

        if 0 <= i - 1 < M:
            ans = min(ans, abs(a - B[i - 1]))
        if 0 <= i < M:
            ans = min(ans, abs(a - B[i]))

    print(ans)


if __name__ == "__main__":
    ans()
