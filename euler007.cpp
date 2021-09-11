// find the 10001st prime
// generalise for nth prime

#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int p);
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    if(!cin) n = 10001;
    int nthPrime = 1;
    int prime = 2;
    cout << "Prime 1 is: 2" << endl;
    for(int i=3;;i+=2)
    {
        if(isPrime(i))
        {
            prime = i;
            nthPrime++;
            // cout << "Prime " << nthPrime << " is: " << prime << endl;
        }
        if(nthPrime >= n) break;
    }
    cout << "Prime " << nthPrime << " is: " << prime << endl;

    return 0;
}

bool isPrime(int n)
{
    if(n % 2 == 0) return false;

    int sqrt = ceil(pow(n,0.5));
    for (int i=3;i<=sqrt;i+=2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
