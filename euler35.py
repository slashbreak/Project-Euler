p = []

def lcs(S):
    l = len(S)
    S += S      # Concatenate string to it self to avoid modular arithmetic
    ar = []
    for i in range(l):
        ar.append(S[i:l+i])
    ar.sort()
    return ar

with open("primes.txt") as f:
    p = [s for line in f.readlines() for s in line[:-1].split(',')]

prunedprimes = []

for pri in p:
    if not set('024568').intersection(pri):
        #print(pri)
        prunedprimes.append(pri)
        




count = 0


count = sum(all(p in prunedprimes for p in lcs(r)) for r in prunedprimes)
print(count)
