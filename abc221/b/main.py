S = list(input())
T = list(input())

count = 0
flag = False
if S == T:
    flag = True
for i in range(len(S)-1):    
    S[i],S[i+1] = S[i+1],S[i]
    if S == T:
        flag = True
    S[i],S[i+1] = S[i+1],S[i]
print("Yes" if flag else "No")