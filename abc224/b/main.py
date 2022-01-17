H,W = map(int,input().split())
A = []
for i in range(H):
   a = list(map(int,input().split())) 
   A.append(a)
flag = True
for i in range(H-1):
  for j in range(1,W):
    if A[i][j-1] + A[i+1][j] > A[i][j] + A[i+1][j-1]:
      flag = False
      break
  if flag == False:
    break
if flag:
  print("Yes")
else:
  print("No")
      