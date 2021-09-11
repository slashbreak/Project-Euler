// convert letters of words to their number value (a=1, b=2) and sum them. then count how many
// sums are triangle numbers
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
// compute 256 triangle numbers

int main()
{
    int amount = 0; // how many words make tri nums
    vector<int> triangleNumbers;
    for(int i=1;i<=256;++i)
    {
        triangleNumbers.push_back(((i+1)*i)/2);
    }
    vector<string> words;
    const string FILE = "euler042words.txt";
    ifstream file(FILE);
    if(file.is_open())
    {
        while(!file.eof())
        {
            string s;
            file >> s;
            words.push_back(s);
        }
    }
    
    // split word into letters and assign numeric values
    for (int i=0;i<words.size();++i)
    {
        string word = words[i];
        int wSize = word.size();
        int sumLetters = 0;
        for (int j=0;j<wSize;++j)
        {
            int s = word[j];
            sumLetters += s - '@';
        }
        for (int x=0;x<triangleNumbers.size();++x)
        {
            if(sumLetters == triangleNumbers[x])
            {
                amount++;
                break;
            }
        }
    }
    cout << amount << endl;

    return 0;
}
