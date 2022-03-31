
numero = 1745

tmp = numero / 1000
x = int(tmp)
tmp = numero % 1000

y = tmp / 100
y = int(y)
tmp %= 100
print(tmp)

z = tmp / 10
z = int(z)
tmp %= 10

w = tmp / 1
w = int(w)


w,z,y,x  = x,y,z,w


final = x * 1000 + y * 100 + z * 10 + w * 1
#print(final)
