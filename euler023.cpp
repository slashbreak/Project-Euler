// non abundant sums
// find the sum of all integers which cannot be written as the sum of
// two abundant numbers
// an abundant number is when the sum of a number's divisors exceeds that number

#include <iostream>
#include <vector>
using namespace std;

bool isAbundant(int n)
{
    int sum = 0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum += i;
        }
    }
    if(sum > n)
    {
        return true;
    }
    return false;
}

int main()
{
    vector<int> abundants;
    for(int i=1;i<28124;i++)
    {
        if(isAbundant(i))
        {
            abundants.push_back(i);
        }
    }
    
    bool abs[28124*2+1] = {false};
    for(int i=0;i<abundants.size();i++)
    {
        for(int j=0;j<=i;j++)
        {
            abs[abundants[i] + abundants[j]] = true;
        }
    }

    int newsum = 0;
    for (int i=0;i<28124;i++)
    {
        if(abs[i]==false)
        {
            newsum += i;
        }
    }
    cout << newsum << endl;
    return 0;
}
