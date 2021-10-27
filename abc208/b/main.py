import math
P = int(input())
answer = 0
for i in range(1, 11):
    divisor = math.factorial(i+1)
    print('divisor', divisor)
    residue = P % divisor
    print('residue', residue)
    answer += residue // math.factorial(i)
    print('answer', answer)
    P -= residue
    print('P', P)
print(answer)
