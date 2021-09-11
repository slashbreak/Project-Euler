// find the first triangle number to have more than 500 divisors
#include <iostream>
#include <math.h>
using namespace std;

int triangle(int n);

int main()
{

    int nDivs = 0;
    for(int i=1;;i++)
    {
        int tri = triangle(i);
        int root = pow(tri,0.5);
        nDivs = 0;
        for (int j=1;j<=root;j++)
        {
            if(tri%j==0)
            {
                nDivs++;
            }
        }
        nDivs *= 2;
        if (nDivs > 500)
        {
            cout << tri << " " << nDivs << endl;
            break;
        }
    }
    return 0;
}

int triangle(int n)
{
    return ((n+1)*n/2);

}



