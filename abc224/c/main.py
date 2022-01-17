N = int(input())
X = []
Y = []
for i in range(N):
  x,y = map(int,input().split())
  X.append(x)
  Y.append(y)

count = 0
for i in range(N):
  for j in range(i):
    for k in range(j):
      if (Y[i] - Y[j])*(X[j] - X[k]) !=  (X[i] - X[j])*(Y[j] - Y[k]):
        count += 1       
print(count)