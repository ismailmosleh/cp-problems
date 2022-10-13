# t = int(input())
# c, n = map(int, input().split())
# n k
# d
# b

n ,k=map(int, input().split())

d = list(map(int, input().split()))
b = list(map(int, input().split()))


def find_for_one(dj, bj, k) :
         j = 0
         while (dj * j + bj <= k) :
                  j += 1
         return j 

# print(find_for_one(5, 4, 7))


def solve():
         l = 1
         i = 0
         ai = 0
         while(i < n) :
                  p = find_for_one(d[i], b[i], k)
                  l = l * p
                  i += 1
         print(l%1000000007)
solve()