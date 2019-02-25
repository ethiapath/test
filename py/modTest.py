# calculating some mods
x = 4
y = 13
print( x, "mod ", "i", "=", " ", "|", y, "mod ", "i", "=", " ")
for i in range(0, 52):    
    print( x, "mod ", i, "=", i % x, "|",  y, "mod ", i, "=", i % y)

count = 0;
print( "other way:" )
for s in range(0, 4):
    for v in range(0, 13):
        print( "v:", v, "s:", s, "place:", v + ( s * 13 ), "=", count )
        count = count + 1
               
