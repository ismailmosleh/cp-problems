from itertools import combinations
k,a,b,m = map(int, input().split())
z = list(map(int, input().split()))
somme = 0
for i in range(2,k+1):
    for j in combinations(z, i):
        if max(j)-min(j) >= m and a<=sum(j)<=b:
            somme += 1
print(somme)