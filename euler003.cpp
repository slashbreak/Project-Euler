// find the largest prime factor of 600851475143
// ans = 6857

#include <iostream>
#include <math.h>
using namespace std;
bool isPrime( unsigned long long int p);
int main()
{
    unsigned long long int input;
    cin >> input;
    cin.ignore();
    if (!cin) input = 600851475143;
    unsigned long long int num = input;
    unsigned long long int numsqrt = (unsigned long long int)pow(num,0.5);
    if (num % 2==0)
    {
        cout << "2" << endl;
    }
    for( unsigned long long int i=3;i<=numsqrt;i+=2)
    {
        if (num%i==0 && isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}

bool isPrime( unsigned long long int p)
{
    if (p==2) { return true;}
    unsigned long long int power = (unsigned long long int)pow(p,0.5);
    if (p % 2 == 0) return false;
    for( unsigned long long int i=3;i<=power;i+=2)
    {
        if(p % i == 0) return false;
    }
    return true;
}
