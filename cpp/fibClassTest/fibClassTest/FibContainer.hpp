//
//  FibContainer.hpp
//  fibClassTest
//
//  Created by Hargobind Atwal on 3/22/17.
//  Copyright © 2017 Hargobind Atwal. All rights reserved.
//

#ifndef FibContainer_hpp
#define FibContainer_hpp

#include <iostream>
#include "Fib.hpp"

class FibContainer{
    int a, b, c;
    int i;
    int size;
    Fib ** fibs;
public:
    FibContainer( int sz = 10 );
    
    void createFibs( int size );
    
    void displayFib();
    
    void deleteFib();
    
    ~FibContainer();
};


#endif /* FibContainer_hpp */
