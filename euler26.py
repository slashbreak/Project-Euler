from decimal import *
import math

'''

 Fermat’s little theorem that says: 1/d has a cycle of n digits if 10n − 1 mod d = 0 for prime d. It also follows that a prime number in the denominator, d, can yield up to d − 1 repeating decimal digits. We need to find the largest prime under 1000 that has d − 1 digits. This is called a full reptend prime. 

for denominator in primeslist:
	period = 1
	while pow(10, period, denominator) != 1: period += 1
	if denomintor-1 == period: break 
return denomintor


'''

getcontext().prec = 160
for i in range (1,300):
	#//temp = str(1.0/i)[2:].lstrip("0")
	temp = "{:.100f}".format(1.0/i)[2:].lstrip("0")
	
	temp = Decimal(1)/Decimal(i)
	print (str(i) + " --- " + str(temp))
	
