// find the sum of even fibonacci numbers below 4million
#include <iostream>
using namespace std;

int main()
{
    int a=1;
    int b=2;
    int sum=2;
    int temp=0;
    while(b<4000000)
    {
        temp=a+b;
        a=b;
        b=temp;
        if(b%2==0)
        {
            sum += b;
            //cout << sum << " ";
        }
    }

    cout << sum << endl;
    return 0;
}
