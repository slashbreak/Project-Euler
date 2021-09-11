// find the highest palindromic product of the 3 digit numbers
// ans = 906609

#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(int n);

int main()
{
    int product = 0;
    int maxPalindrome = 0;
    for (int i=100;i<1000;++i)
    {
        for (int j=100;j<1000;++j)
        {
            product = i * j;
            if(isPalindrome(product) && product > maxPalindrome)
            {
                cout << maxPalindrome << endl;
                maxPalindrome = product;
            }
        }
    }
    cout << maxPalindrome << endl;
    return 0;
}

bool isPalindrome(int n)
{
    string forward = std::to_string(n);
    int size = forward.size();

    string backward = forward;
    for (int i=0;i<=size;++i)
    {
        backward[i] = forward[size-1-i];
    }
    if (forward == backward)
        return true;
    return false;
}
