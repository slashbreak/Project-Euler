// find the difference between the sum of the squares, and the square of the sum, 
// of the natural numbers between 1..100

#include <iostream>
using namespace std;

int main()
{
    int squareOfSum = 0;
    int sumOfSquares = 0;
    for (int i=1;i<=100;++i)
    {
        squareOfSum += i;
        sumOfSquares += i*i;
    }
    squareOfSum *= squareOfSum;
    int difference = squareOfSum - sumOfSquares;
    cout << difference << endl;
    

    return 0;
}
