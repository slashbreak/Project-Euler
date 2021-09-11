// sum all primes below 2,000,000
// ans = 142913828922
#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(unsigned long long p);
int main()
{
    unsigned long long n;
    cin >> n;
    cin.ignore();
    if(!cin) n = 2000000;
    unsigned long long nthPrime = 1;
    unsigned long long prime = 2;
    for(unsigned long long i=3;i<n;i+=2)
    {
        if(isPrime(i))
        {
            prime += i;
            nthPrime++;
        }
        if(nthPrime >= n) break;
    }
    cout << "Prime " << nthPrime << " is: " << prime << endl;

    return 0;
}

bool isPrime(unsigned long long n)
{
    if(n % 2 == 0) return false;

    unsigned long long sqrt = ceil(pow(n,0.5));
    for (unsigned long long i=3;i<=sqrt;i+=2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
