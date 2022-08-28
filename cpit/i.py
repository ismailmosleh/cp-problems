from cmath import pi


def A(x) :
    r2 = x*x
    t = 3**(1/2)
    pi3 = pi/3
    a = (1 + pi3 - t)*r2

    b = ((-1+pi/12) + t/2)*r2*4

    c = x**2 - (a+b)
    print( c,b,a )

x = float(input())
A(x)
