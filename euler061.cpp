#include <iostream>
#include <vector>
#include <string>
using namespace std;
int triangle(int tri)
{
    return ((tri*(tri+1))/2);
}
int pentagon(int pen)
{
    return ((pen*((pen*3)-1))/2);
}
int square(int squ)
{
    return (squ*squ);
}
int hexagon(int hex)
{
    return (hex*((hex*2)-1));
}
int heptagon(int hep)
{
    return ((hep*((5*hep)-3)/2));
}
int octagon(int oct)
{
    return (oct*((3*oct)-2));
}
int main()
{
    // generate lists of the 'shape' numbers with 4 digits
    // cast to string to make it quicker to manipulate
    vector<string> triangles,squares,pentagons,hexagons,heptagons,octagons;

    // make bound 200, as an estimate
    for(int i=1;i<200;++i)
    {
        int tri = triangle(i);
        if(tri>999 && tri<10000)
            triangles.push_back(to_string(tri));
        int squ = square(i);
        if(squ>999 && squ<10000)
            squares.push_back(to_string(squ));
        int pen = pentagon(i);
        if(pen>999 && pen<10000)
            pentagons.push_back(to_string(pen));
        int hex = hexagon(i);
        if(hex>999 && hex<10000)
            hexagons.push_back(to_string(hex));
        int hep = heptagon(i);
        if(hep>999 && hep<10000)
            heptagons.push_back(to_string(hep));
        int oct = octagon(i);
        if(oct>999 && oct<10000)
            octagons.push_back(to_string(oct));
    }
    int found = 0; // when found = 6, break
    for(int i=0;i<triangles.size();++i)
    {
        string current = triangles[i];
        string end = current.substr(2,2);

    }

    vector<vector<int>> t(2);
    t[0].push_back(1);
    t[0].push_back(2);
    t[1].push_back(3);
    for(int i=0;i<t.size();i++)
    {
        for(int a=0;a<t[i].size();a++)
        {
            cout << t[i][a] << endl;
        }
    }
    return 0;
}
