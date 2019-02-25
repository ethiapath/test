// primes.cpp
// testing some prime number finding functions for 
// hash table lab
//
// Hargobind Atwal 7/13/17
#include <iostream>


bool isPrime(int n) {
    for( int i = 2; (i*i <= n); i++ )
        if( n % i == 0 )
            return false;
    return true;
}

int getPrime(int min) {
    for( int j = min+1; true; j++ ) {
        if( isPrime(j) ) {
            return j;
        }
    }
}


int main(){

    int end = 50;
    for(int i = 0; i < end; i++) {
        std::cout << getPrime(i) << '\n';
    }

    return 0;
}
