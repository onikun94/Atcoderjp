S = input()
T = input()

U = [ord(char)-ord('a') for char in S]
V = [ord(char)-ord('a') for char in T]

W = {(i-j)%26 for i,j in zip(U,V)}

if len(W) == 1: 
  print("Yes")
else:
  print("No")
