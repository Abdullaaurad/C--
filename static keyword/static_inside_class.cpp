#include <iostream>

class square{
public:
    static int x,y;

    void print(){
        std::cout << "x*y =" << x*y << std::endl;
    }
};

int square::x;   //without this the code will not even run
int square::y;   //without this the code will not even run  
/*
In C++, when you declare a static member variable inside a class,
you also need to provide a definition for that static member variable outside of the class.
This is because the declaration of a static member inside a class merely announces its existence,
but it doesn't allocate memory for it. The memory allocation and definition of the variable happen outside the class.
In your code, the lines int square::x; and int square::y;
provide the definition and memory allocation for the static members x and y
*/

int main(){
    square e1,e2;
    e1.x=5;
    e1.y=7;

    e2.x=3;
    e2.y=2;

    e1.print();
    e2.print();

    return 0;
}