
N,M = map(int,input().split())
B = []
for i in range(N):
  b = list(map(int,input().split()))
  B.append(b)

def calender():
  for i in range(M):
    if B[0][i] % 7 == 1 and i != 0:
      return False 
# 行の走査
  for i in range(N):
    for j in range(M-1):
      if B[i][j] + 1 != B[i][j+1]:
        return False
#列の走査
  for i in range(N-1):
    if B[i][0]+7 != B[i+1][0]:
      return False
  return True      

def main():
  ans = calender()
  if ans:
    print("Yes")
  else:
    print("No")

if __name__ == "__main__":
  main()