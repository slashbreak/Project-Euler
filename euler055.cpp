// find the number of Lychrel numbers below 10,000
// take n = 349. 349+943 = 1292. 1292 + 2921 = 4213. 4213 + 3124 = 7337, which is a palindrome
// a number is Lychrel if it never reaches a palindrome
// for this, assume a number is Lychrel if it doesn't reach a palindrome
// after 50 iterations

#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;
bool isPalindrome(unsigned long long int n)
{
    string forward = to_string(n);
    string rev = string(forward.rbegin(), forward.rend());
    return (forward == rev);
}
unsigned long long int reverseInt(unsigned long long int n)
{
    string forward = to_string(n);
    string backward = string(forward.rbegin(),forward.rend());
    unsigned long long int temp; 
    char *a=new char[backward.size()+1];
    a[backward.size()]=0;
    memcpy(a,backward.c_str(),backward.size());

    char* ptr;
    temp = strtoull(a,&ptr,10);
    return temp;
}

bool isLychrel(int n)
{
    int iterations = 0;
    unsigned long long int current = n;
    while(iterations < 50)
    {
        current = current + reverseInt(current);
        if(isPalindrome(current))
        {
            return false;
        }
        iterations++;
    }
    return true;
}
int main()
{
    int total = 0; // amount of Lychrel numbers
    for (int i=1;i<10000;++i)
    {
        if(isLychrel(i))
        {
            total++;
        }
    }
    cout << total << endl;
    return 0;
}
