S = input()
SLen = len(S)

l = len(S) - len(S.lstrip('a'))  
r = len(S) - len(S.rstrip('a'))  
T = "a" * (r-l) + S
if T == T[::-1]:
    print("Yes")
else:
    print("No")
# for i in range(SLen):
#     if S[-1] == 'a':
#         S = S[:-1]

# SL = len(S)
# if len(S) > 0:
#     if SL % 2 == 0:
#         count = 0
#         for i in range(SL//2):
#             if S[i] == S[(SL-1)-i]:
#                 count +=1
#             if count  == SL // 2:
#                 print("Yes")
#             else:
#                 print("No")
#     else:
#         count = 0
#         for i in range(SL//2):
#             if S[i] == S[(SL-1)-i]:
#                 count+=1
        
#         if count == SL // 2:
#             print("Yes")
#         else:
#             print("No")
# else:
#     print("Yes")