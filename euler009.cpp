// find the product abc of the pythagorean triplet a+b+c=1000

#include <iostream>
using namespace std;

int main()
{
    int a,b,c = 0;
    for (int i=1;i<1000;i++)
    {
        for (int j=1;j<1000;j++)
        {

            a = i;
            b = j;
            c = 1000-a-b;
            if((a*a + b*b) == c*c && a+b+c == 1000 && b>a)
            {
                cout << a << " " << b << " " << c << endl;
                cout << a*b*c << endl;
            }
        }
    }
    return 0;
}
