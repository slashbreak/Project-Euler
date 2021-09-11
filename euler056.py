# for the numbers of form i^j, where i,j<100, print the max sum of their digits
s = 0
max = 0
for i in range(1,100):
    for j in range(1,100):
        x = str(i**j)
        s = sum( int(a) for a in x)
        if s > max: max = s

print max
