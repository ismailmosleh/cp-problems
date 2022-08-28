n=int(input())
for i in range(n):
    s=input()
    b=1
    j=0
    m=len(s)
    value=0
    v=0
    while j<m:
        if(s[j]=='{'):
            v+=1
            value=max(v,value)
        elif(s[j]=='}'):
            if(v>0):
                v-=1
            else:
                b=0
                break
        j+=1

    if(b==0 or v!=0):
        print("INVALID")
    else:
        print(value)
