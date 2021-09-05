A = input()
Y = int(A[-1])
if 0 <= Y <= 2:
    print(A[:-2]+'-')
elif 3 <= Y <= 6:
    print(A[:-2])
else:
    print(A[:-2]+'+')
