n=int(input())
for i in range(n):
    t=int(input())
    l=input()
    m=0
    c=0
    R=[]
    for j,ch in enumerate(l):
        if(ch=='-'):
            a=1
        else:
            a=-1
        f=[]
        if(j==0):
            f.append(a)
            if(a<0):
                a=0
            elif(a==0):
                m=m+1
            elif(a%3==0):
                m+=1
        else:
            f.append(a)
            if(a<0):
                a=-1
            elif(a==0):
                m=m+1
            elif(a%3==0):
                m+=1
            for i in range(j):
                c=a+R[i]
                f.append(c)
                if(c<0):
                    c=0 
                elif(c==0):
                    m=m+1
                elif(c%3==0):
                    m+=1
        #for i in range(j):
            #print(f[i],end=" ")
        #print(f[j],end='\n')
        R=f
    print(m)