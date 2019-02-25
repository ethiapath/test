//
//  Fib.h
//  fibClassTest
//
//  Created by Hargobind Atwal on 3/22/17.
//  Copyright © 2017 Hargobind Atwal. All rights reserved.
//

#ifndef Fib_hpp
#define Fib_hpp

class Fib{
    
private:
    int num;
    int place;
public:
    Fib(): num(0), place(0) {  }
    Fib(int n ): num(n) { }
    Fib(int i_fib, int n): num(n), place(i_fib) { }
    int getNum() { return num; }
    int getPlace() { return place; }
    int operator+( Fib * param);
};

#endif /* Fib_hpp */
