A,B,C = map(int,input().split())
for i in range(1000):
    ans = i * C
    if ans >= A and ans <= B:
        print(ans)
        break
    if i == 999:
        print(-1)
        break