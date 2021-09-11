// find the smallest integer which is divisible by the numbers 1..20
// dirty brute force solution
// easier way is to get the prime factors of 1..20 and count the commons

#include <iostream>
using namespace std;

int main()
{
    for (int i=20;;i+=20)
    {
        if (i%19==0 &&
            i%18==0 &&
            i%17==0 &&
            i%16==0 &&
            i%15==0 &&
            i%14==0 &&
            i%13==0 &&
            i%12==0 &&
            i%11==0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}


