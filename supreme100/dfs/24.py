
n = int(input())
mulArray = [[] for _ in range(n)]
for i in range(n):
    u,k,*a = map(int,input().split())
    mulArray[u-1] = a

IN = [0 for _ in range(n)] #行き
OUT = [0 for _ in range(n)] #帰り

global t
def dfs(start):
    global t
    t += 1
    IN[start] = t
    print("IN = ",IN)
    visited[start] = True
    print("visited = ",visited)
    for i in mulArray[start]:
        if visited[i-1] == False:
            print("next = ",i-1)
            dfs(i-1)
    t += 1
    OUT[start] = t
    print("OUT = ",OUT)
visited = [False for _ in range(n)]
t = 0
for i in range(n):
    if visited[i] == True:
        continue
    print("dfs is called = ",i)
    dfs(i)

for i in range(n):
    print(i+1,IN[i],OUT[i])