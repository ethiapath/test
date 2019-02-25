// testing some pointer arithimetic for arrays
// should just print out some ints from 0 to 100
//

#include <iostream>

using namespace std;

#define SIZE 100

int main()
{
    int things[SIZE];

    int * stuff = new int[SIZE];

    int * x = stuff;

    for(int i = 0; i < SIZE; i++)
    {
        *(stuff+i) = i + 1;
        cout << "\t" << (x > stuff) << '\t';
        cout << dec << stuff << " - " << x << " = " << ((x) - stuff) << endl;
        x++;
    }

    return 0;
}
