N = int(input()) 
a = set()
for i in range(N):
  _,*inp = map(int, input().split())
  inp = tuple(inp)
  a.add(inp)
print(len(a)) 