import itertools

def digit(i,lst=[]):
    if i > 0:
        lst.append(i%10)
        return digit(i//10,lst)
    else:
        lst.reverse()
        return lst

N = int(input())
arr = digit(N)
perm = list(itertools.permutations(arr))

maxV = -100
for i in range(len(perm)):
    a = perm[i][0]
    b = perm[i][1]
    c = perm[i][2]
    divide = (a * 10 + b)*c
    if divide > maxV:
        maxV = divide
print(maxV)
# print(type(perm[0][0]))
# print(type(1))
