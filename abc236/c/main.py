N,M = map(int,input().split())
S = input().split()
# T = set(input().split())
T = input().split()
print(type(T))
for i in S: 
    if i in T:
        print("Yes")
    else:
        print("No")