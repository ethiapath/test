//
// Testing out some preprocessor macros
//
//
#include <iostream>

using namespace std;

int main()
{


//#define PRE
#ifdef PRE
    std::cout << "Date: " << __DATE__ << '\n';
    std::cout << "Time: " << __TIME__ << '\n';
    std::cout << "C++: " << __cplusplus << '\n';
    std::cout << "LINE: " << __LINE__ << '\n';
#endif /* PRE */

    return 0;
}
