N = int(input())
A = list(map(int,input().split()))
count = [0] * N
for i in A:
    count[i-1]+=1 

print(count.index(3)+1)