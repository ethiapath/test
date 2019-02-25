//
//  FibContainer.cpp
//  fibClassTest
//
//  Created by Hargobind Atwal on 3/22/17.
//  Copyright © 2017 Hargobind Atwal. All rights reserved.
//

#include "FibContainer.hpp"

FibContainer::FibContainer( int sz /* = 10 */ ): size(sz){
    createFibs( sz );
}

void FibContainer::createFibs( int size ){
    fibs = new Fib * [size];
    a = 0, b = 1, c = 1;
    i = 0;
    while(i < size){
        if (this->fibs[i] == nullptr && this->fibs[i+1] == nullptr){
            this->fibs[i] = new Fib( i, a );
            this->fibs[i+1] = new Fib( i+1, b );
        }else{
            //fibs[i+1] = fibs[i] + fibs[i-1];
            c = **(this->fibs+i) + this->fibs[i-1];
            this->fibs[i+1] = new Fib(c, i);
        }
         c = a + b;
         a = b;
         b = c;
        i++;
    }
}


void FibContainer::displayFib(){
    i = 0;
    while(i < size){
        std::cout << fibs[i]->getNum() << '\n';
        i++;
    }
}

void FibContainer::deleteFib(){
    /*
     for(int d = 0; d < size; d++){
     delete **(fibs+d);
     fibs++;
     }
     */
    //delete * fibs;
}

FibContainer::~FibContainer(){
    deleteFib();
}
