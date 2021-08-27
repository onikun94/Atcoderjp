N = int(input())
s = list(map(int, input().split()))
t = list(map(int, input().split()))
MAX = 10 ** 10
sunuke = [0] * N
sunukeSave = [0] * N

currentSunuke = t.index(min(t))
sunuke[currentSunuke] = min(t)
currentMin = min(t)
sunukeSave[currentSunuke] = min(t)
t[currentSunuke] = MAX


while currentSunuke < N - 1:
    takaMin = min(t)
    takaIndexMin = t.index(min(t))
    if takaMin == currentMin:
        sunuke[takaIndexMin] = takaMin
        sunukeSave[takaIndexMin] = takaMin
        t[takaIndexMin] = MAX
    elif sunuke[currentSunuke] + s[currentSunuke] < takaMin:
        if sunuke[currentSunuke + 1] == 0:
            sunukeSave[currentSunuke + 1] = sunuke[currentSunuke] + \
                s[currentSunuke]
        sunuke[currentSunuke + 1] = sunuke[currentSunuke] + s[currentSunuke]
        currentSunuke += 1
    else:
        if sunuke[takaIndexMin] == 0:
            sunukeSave[takaIndexMin] = takaMin
        sunuke[takaIndexMin] = takaMin
        t[takaIndexMin] = MAX

for i in range(N):
    print(sunukeSave[i])

# print(t)
