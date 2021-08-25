N = int(input())

for i in range(100):
    if N < 2 ** i:
        ans = i-1 if i > 0 else i
        print(ans)
        break
