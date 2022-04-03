abc = input()
a =int(abc[0])
b =int(abc[1])
c =int(abc[2])
abc = a* 100 + b* 10+ c
bca = b* 100 + c*10 + a
cab = c* 100 + a * 10 + b
ans = abc+bca+cab
print(ans)