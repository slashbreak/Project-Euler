#!/usr/bin/python
sum = 0
for i in range(1,1000000):
    b2 = bin(i)[2:]
    b2rev = b2[::-1]
    b10 = str(i)
    b10rev = b10[::-1]
    if b2 == b2rev and b10 == b10rev:
        sum += i
        print(str(i))
print(sum)
