//
//
// starter file
//
#ifndef PROG
#define PROG

#include <iostream>

using namespace std;

int main()
{

    int * f;
    cout << "Size of int * " << sizeof(f) << "\t mem " << f << '\n';

    f = new int(5);
    cout << "Size of int " << sizeof(*f) << "\t mem " << f << '\n';

    f = new int(7);
    cout << sizeof(f) << "\t b4" << *f << '\n';


    return 0;
}
#endif /* PROG */
