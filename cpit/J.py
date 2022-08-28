def solve(a,c) :
    day = 0
    rm = c 
    e = a
    while(rm > 0) :
        day += 1
        rm = min(rm+e,c) - day 

    return day 

L= list(map(int,input().split()))

c = L[0]
a = L[1]

print(solve(a,c))