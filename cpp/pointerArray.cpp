// testing pointer arrays
//
//
//
#include <iostream>

class Fib{

public:
    int num;
    int place;
    Fib(int i_fib, int n): num(n), place(i_fib) { }
};

class FibContainer{
    int a, b, c;
    int i;
    int size;
    Fib ** fibs;
    public:
    FibContainer( int sz ): size(sz){
        createFibs( sz );
    }

    void createFibs( int size ){
    fibs = new Fib * [size];
    a = 0;
    b = 1;
    i = 0;

        while(i < size){
            this->fibs[ i ] = new Fib( i, a );
            c = a + b;
            a = b;
            b = c;
            i++;
        }
    }


    void displayFib(){
        i = 0;
        while(i < size){
            std::cout << fibs[i]->num << '\n';
            i++;
        }
    }

    void deleteFib(){

        for(int d = 0; d < size; d++){
            delete (*fibs);
            fibs++;
        }
        delete [] fibs;
    }
};

int main(){

    int size = 20;

    FibContainer f(size);

    f.displayFib();

    f.deleteFib();

    return 0;
}
