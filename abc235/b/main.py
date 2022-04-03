N = int(input())
H = list(map(int,input().split()))
max = -100
for i in range(N):
  if H[i] > max:
    max = H[i]
  elif H[i] <= max:
    break 
print(max)