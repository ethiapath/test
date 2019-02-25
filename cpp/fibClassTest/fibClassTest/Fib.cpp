//
//  Fib.cpp
//  fibClassTest
//
//  Created by Hargobind Atwal on 3/22/17.
//  Copyright © 2017 Hargobind Atwal. All rights reserved.
//

#include "Fib.hpp"

int Fib::operator+ (Fib * param){
    // Fib a(  );
    return this->getNum() + param->getNum();
}