n=int(input())
for i in range(n):
    r,c=map(int,input().split())
    a=[]
    for j in range(r):
        s=input()
        b=[]
        for l in range(c):
            b.append(s[l])
        a.append(b)
    if r==1:
        if '^' in a[0]:
            print("Case #",i+1,": Impossible",sep="")
        else:
            print("Case #",i+1,": Possible",sep="")
            for j in range(c):
                print(".",end="")
            print("")
    elif c==1:
        if ['^'] in a:
            print("Case #",i+1,": Impossible",sep="")
        else:
            print("Case #",i+1,": Possible",sep="")
            for j in range(r):
                print(".")
    else:
        print("Case #",i+1,": Possible",sep="")
        for m in range(r):
            for j in range(c):
                print("^",end="")
            print("")