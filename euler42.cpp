// convert letters of words to their number value (a=1, b=2) and sum them. then count how many
// sums are triangle numbers
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    vector<string> words;
    const string FILE = "euler042words.txt";
    ifstream file(FILE);
    if(file.is_open())
    {
        string s;
        file >> s;
        words.push_back(s);
    }
    for (int i=0;i<words.size();++i)
    {
        cout << words[i] << " ";

    }
    return 0;
}
