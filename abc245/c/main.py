import itertools
from collections import Counter
import bisect
import sys

def gcd(a, b): #最大公約数
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):#最小公倍数
    return a * b // gcd (a, b)

def divisor(n):#約数列挙
    i = 1
    table = []
    while i * i <= n:
        if n%i == 0:
            table.append(i)
            table.append(n//i)
        i += 1
    table = list(set(table))
    return table

def prime_decomposition(n): #素因数分解
  i = 2
  table = []
  while i * i <= n:
    while n % i == 0:
      n /= i
      table.append(i)
    i += 1
  if n > 1:
    table.append(n)
  return table

def is_prime(n): #素数判定
    for i in range(2, n + 1):
        if i * i > n:
            break
        if n % i == 0:
            return False
    return n != 1

def sieve(n): #エラトステネスの篩
    is_prime = [True for _ in range(n+1)]
    is_prime[0] = False

    for i in range(2, n+1):
        if is_prime[i-1]:
            j = 2 * i
            while j <= n:
                is_prime[j-1] = False
                j += i
    table = [ i for i in range(1, n+1) if is_prime[i-1]]
    return is_prime, table #is_primeは素数かどうかのbool値　tableには素数格納 is_primeの最後の要素謎

def pos(x, n, m): #xのn乗をmで割った余り
    if n == 0:
        return 1
    res = pos(x*x%m, n//2, m)
    if n%2 == 1:
        res = res*x%m
    return res

def geneBit(bitN):#ビット列生成
    L = [0, 1] #生成する数字
    num = bitN #生成するビット数
    bit_list = list(itertools.product([0, 1], repeat=num))
    return bit_list

# tap = ('a', 'b', 'c', 'd', 'e')
def factorial(tap): #階乗
    ptr = list(itertools.permutations(tap))
    ptr_num = len(list(itertools.permutations(tap))) #数
    return ptr,ptr_num

def permutations(tap,pNum):#順列
    ptr = list(itertools.permutations(tap,pNum))
    ptr_num = len(list(itertools.permutations(tap,pNum))) #組み合わせ数 
    return ptr,ptr_num


def combination(tap,cNum):#組み合わせ
    ptr = list(itertools.combinations(tap,cNum))
    ptr_num = len(list(itertools.combinations(tap,cNum))) #組み合わせ数 
    return ptr,ptr_num
    
# arr = [1,1,4,6,1,1,35,1,5,1,3]
def countArrayNum(): #配列の任意の要素の数を数える(counter)
    d = Counter() #インスタンスを生成
    d.update(arr)
    # print(d[1]) #d[数えたい値]
    return d

# A = [[1, 2], [3, 1], [2, 5]]
def multiSort(mulArray,ele):#多次元配列のソート
    B = sorted(A, key=lambda x: x[ele]) 
    '''実行結果
    B = [[1, 2], [2, 5], [3, 1]] 0番目でソート
    C = [[3, 1], [1, 2], [2, 5]] 1番目でソート
    '''
    return B

def binarySearch(sortArray,ele): #二分探索
    return bisect.bisect(sortArray,ele) #eleの挿入位置を返す
    # return bisect.bisect_left(sortArray,ele) #eleが複数あるとき一番左の位置を返す
    # return bisect.bisect_right(sortArray,ele) #eleが複数あるとき一番右の位置を返す

def main():
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))

    flag = 1
    for i in range(n-1):
        minaa = 10000000000
        minab = 10000000000
        minba = 10000000000
        minbb = 10000000000
        if i == 0:
            minaa = abs(a[i] - a[i+1])
            minab = abs(a[i] - b[i+1])
            minba = abs(b[i] - a[i+1])
            minbb = abs(b[i] - b[i+1])
        if i > 0:
            if flag % 2 == 0:
                minaa = abs(a[i] - a[i+1])
            if flag % 2 == 0:
                minab = abs(a[i] - b[i+1])
            if flag % 3 == 0:
                minba = abs(b[i] - a[i+1])
            if flag % 3 == 0:
                minbb = abs(b[i] - b[i+1])

        flag = 1
       

        if minaa <= k:#次a使える
            flag = flag *2
        if minab <= k:#次b使える
            flag = flag *3
        if minba <= k:#次a使える
            flag = flag *2
        if minbb <= k:#次b使える
            flag = flag *3
        if minaa > k and minab > k and minba > k and minbb > k:
            print("No")
            sys.exit()
    print("Yes")

if __name__ == "__main__":
    main()