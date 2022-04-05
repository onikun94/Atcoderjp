A,B = map(int,input().split())
big = A-B
if big == 0:
    print(1)
else:
    print(32**big)