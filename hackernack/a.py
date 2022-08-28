t = int(input())
while t > 0:
    c, n = map(int, input().split())
    W = []
    F = []
    for i in range(n):
        w, f = map(int, input().split())
        j = 0
        while j < i:
            if f*W[j] > F[j]*w:
                F = F[:j-1]+[f]+F[j:]
                W = W[:j-1]+[w]+W[j:]
                break
            if f*W[j] == F[j]*w:
                while j < i:
                    if w > W[j]:
                        F = F[:j-1]+[f]+F[j:]
                        W = W[:j-1]+[w]+W[j:]
                        break
                j += 1
            j += 1
        if j == i:
            F.append(f)
            W.append(w)
    for c in F:
        print(c)
    for c in W:
        print(c)
    s = 0
    k = c
    i = 0
    while i < n:
        if(k >= W[i]):
            k -= W[i]
            s += F[i]
        i += 1
    print(s)
    t -= 1
