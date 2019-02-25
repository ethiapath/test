// testing pointer arrays
//
//
//
#include <iostream>
#include "Fib.hpp"
#include "FibContainer.hpp"

int main(){
    
    int size = 20;
    
    FibContainer f( size );
    
    f.displayFib();
    
    f.deleteFib();
    
    return 0;
}
