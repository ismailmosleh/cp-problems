n,m=list(map(int,input().split()))
R=[]

for i in range(n):
    l=list(map(int,input().split()))
    R.append(l)
def dep(l,R):
    for i in range(1,len(l)):
        if(R[i-1]*l[i]!=R[i]*l[i-1]):
            return False
    return True
v=0
for i in range(n):
    for j in range(i+1,n):
        if(dep(R[i],R[j])):
            v+=1
w=0
for i in range(m):
    for j in range(i+1,m):
        l=[R[l][i] for l in range(n)]
        k=[R[l][j] for l in range(n)]
        if(dep(l,k)):
            w+=1
print(max(min((n-v),m-w),1))
