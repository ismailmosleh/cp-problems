n=int(input())
for i in range(n):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    if(k*2<n):
        print("Case #",i+1,": NO",sep="")
        continue
    c=[]
    d=[]
    b=1
    for elt in a:
        if elt not in c:
            c.append(elt)
        elif elt not in d:
            d.append(elt)
        else:
            print("Case #",i+1,": NO",sep="")
            b=0
            break
    if b:
        print("Case #",i+1,": YES",sep="")
    
    