// testing x++ vs ++x
//
//
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int * x = new int[10];
    int pos = 0;

    int thing = 5;

    if(!thing)
    {
        cout << "hello!\n";
    }
    for(int i = 0; i < 10; i++)
    {
        x[i] = i*i+1;
        cout << pos << setw(4) << x[i] << '\n';
        pos++;
        cout << pos << setw(4) << x[i] << '\n';
    }

    pos = 0;

    for(int j = 0; j < 10; j++)
    {
        x[j] = j*j+1;
        cout << pos << setw(4) << x[j] << '\n';
        ++pos;
        cout << pos << setw(4) << x[j] << '\n';
    }
    return 0;
}
