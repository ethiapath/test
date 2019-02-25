# fibonacci




p = 10000.0
r = 0.08
n = 12.0
t = 5.0
a =  (((1+( r/t )))**(n*t))*p

print(a)

a = 0
b = 1
c = 0

for i in range( 0, 10 ):
    print( b )
    c = a + b
    a = b
    b = c


