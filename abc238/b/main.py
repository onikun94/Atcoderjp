num = int(input())
pizza = list(map(int,input().split()))
piz = []
count = 0
for i in pizza:
    count += i
    piz.append(count)
    
cutpiz = [0]
for i in piz:
    cutpiz.append(i%360)
cutpiz.append(360)

cutpiz.sort()

ans = 0
for i in range(len(cutpiz)-1):
    if cutpiz[i+1] - cutpiz[i] > ans:
        ans = cutpiz[i+1] - cutpiz[i]
print(ans)