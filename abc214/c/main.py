N = int(input())
s = list(map(int, input().split()))
t = list(map(int, input().split()))
MAX = 10 ** 10
sunuke = [0] * N
sunukeSave = [0] * N

currentSunuke = t.index(min(t))
sunuke[currentSunuke] = min(t)
sunukeSave[currentSunuke] = min(t)
t[currentSunuke] = MAX


while currentSunuke < N - 1:
    takaMin = min(t)
    takaIndexMin = t.index(min(t))

    if sunuke[currentSunuke] + s[currentSunuke] < takaMin:
        if sunuke[currentSunuke + 1] == 0:
            sunukeSave[currentSunuke + 1] = sunuke[currentSunuke] + \
                s[currentSunuke]
        sunuke[currentSunuke + 1] = sunuke[currentSunuke] + s[currentSunuke]
        currentSunuke += 1
    else:
        if sunuke[currentSunuke + 1] == 0:
            sunukeSave[currentSunuke + 1] = takaMin
        sunuke[takaIndexMin] = takaMin
        t[takaIndexMin] = MAX

for i in range(N):
    print(sunukeSave[i])

# print(t)
