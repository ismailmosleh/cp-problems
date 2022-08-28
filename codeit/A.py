n,m=list(map(int,input().split()))
l=[0 for j in range(n)]
b=True
for i in range(m):
    a,b=list(map(int,input().split()))
    if(b>n):
        b=False
        break
    elif l[b-1]==0 and a!=b and l[a-1]!=b :
        l[b-1]=a
    else :
        b=False
        break
if 0 in l[1:] or l[0]!=0:
    b=False

if(b==False):
    print("NO")
else:
    print("YES")