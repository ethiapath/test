// overloading operators example
#include <iostream>
using namespace std;

class CVector {
private:
    int x;
public:
    CVector () {};
    CVector (int a) : x(a) {}
    CVector operator + (const CVector&);
    int getX() { return x; }
};

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.x = this->x + param.x;
  return temp;
}

int main ()
{
  CVector foo (3);
  CVector bar (5);
  CVector result;
  result = foo + bar;
  cout << result.getX() << '\n';
  return 0;
}
