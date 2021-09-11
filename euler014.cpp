// find the longest collatz sequence under 1,000,000

#include <iostream>
using namespace std;

int main()
{
    int max = 1;
    int numMax = 1;
    for (int i=2;i<1000000;++i)
    {
        int steps = 1;
        unsigned long long int n = i;
        while(n!=1)
        {
            if(n%2==0)
            {
                n = n / 2;
                steps++;
            }
            else
            {
                n = (n * 3) + 1;
                steps++;
            }
        }
        if(steps > max)
        {
            max = steps;
            numMax = i;
        }
    }
    cout << numMax << endl;

    return 0;
}
