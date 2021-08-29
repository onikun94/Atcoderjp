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


while currentSunuke < N:
    takaMin = min(t)
    takaIndexMin = t.index(min(t))

    if min(sunukeSave) != 0:
        break

    if sunuke[currentSunuke] + s[currentSunuke] < takaMin:
        if sunuke[currentSunuke + 1] == 0:
            sunukeSave[currentSunuke + 1] = sunuke[currentSunuke] + \
                s[currentSunuke]
        sunuke[currentSunuke + 1] = sunuke[currentSunuke] + s[currentSunuke]
        currentSunuke += 1
    else:
        if sunuke[takaIndexMin] == 0:
            sunukeSave[takaIndexMin] = takaMin
        currentSunuke = takaIndexMin
        sunuke[takaIndexMin] = takaMin
        t[takaIndexMin] = MAX

for i in range(N):
    print(sunukeSave[i])
