n=int(input())
l=list(map(int,input().split()))
s=0
for x in l:
    s+=x*x
s+=-l[n-1]**2+2*l[n-2]
print(s)