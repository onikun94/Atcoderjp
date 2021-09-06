s = input()
print(s[:-2]+'- +'[-~int(s[-1])//4])
