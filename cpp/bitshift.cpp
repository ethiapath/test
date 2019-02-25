//
//
// Testing the bit shift operators
//
#ifndef PROG
#define PROG

#include <iostream>

using namespace std;

int main()
{
    int a = 32, b =128;

    cout << "a: " << a << " b: " << b << '\n';

    a =  a >> 1;
    b = b << 32;


    cout << "a: " << a << " b: " << b << '\n';

    return 0;
}
#endif /* PROG */
