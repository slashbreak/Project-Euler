// find the value where a triangle, pentagonal, and hexagonal equal each other
// T285 = P165 = H143 = 40755
// Tn = n(n+1)/2  --  Pn = n(3n-1)/2  --  Hn = n(2n-1)
// start at h = 143, find a hex number. then start the p counter, keeping it below h. 
// then if a match is found, start the t counter, keeping it below p. 
// print the triangle number when all three match
#include <iostream>
using namespace std;
unsigned long triangle(unsigned long t)
{
    return ((t*(t+1))/2);
}
unsigned long pentagon(unsigned long p)
{
    return ((p*((p*3)-1))/2);
}
unsigned long hexagon(unsigned long h)
{
    return (h*((h*2)-1));
}
int main()
{
    unsigned long t,p,h = 1;
    unsigned long hex,pen,tri = 0;
    for (t=285;;++t)
    {
        tri = triangle(t);
        for (p=1;p<=t;++p)
        {
            pen = pentagon(p);
            if (tri == pen)
            {
                for (h=1;h<=p;++h)
                {
                    hex = hexagon(h);
                    if (pen == hex)
                    {
                        cout << triangle(t) << endl;
                    }
                }
            }
        }
    }
    return 0;
}
