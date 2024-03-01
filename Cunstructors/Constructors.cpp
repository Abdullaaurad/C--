#include<iostream>
using namespace std;

int a = 100;

class X {
    int a;

public:
    X() : a(0) {}
    //X(){a=0;}

    X(int b){
        a=b;
    }

    int increment_a() {
        return (a++);
    }

    void printX() {
        cout << "X.a:" << a <<endl;
    }
};

int main() {
    X Hi;
    int a = 40;
    int b;
    X l(2);
    
    cout << a << endl;         
    cout << ::a << endl; 

    b = Hi.increment_a();
    b = Hi.increment_a();
    Hi.printX();

    cout << b << endl;
    cout << a << endl;
    cout << ::a << endl;

    return 0;
}