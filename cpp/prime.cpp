//
//
// starter file
//
#ifndef PROG
#define PROG

#include <iostream>

using namespace std;


bool isPrime(int n) {
  for( int i = 2; (i*i <= n); i++ )
    if( n % i == 0 )
      return false;
return true;
}

int getPrime(int min) {
  for( int j = min+1; true; j++ )
    if( isPrime(j) )
      return j;
}

int main()
{

  int num = 30;
  cout << "what is the highest prime desiered?\n";
  cin >> num;
  cout << num <<  " next prime is  " << getPrime( num ) << "\n";
  return 0;
}
#endif /* PROG */
