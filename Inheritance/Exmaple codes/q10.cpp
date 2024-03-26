#include <iostream>
using namespace std;

class A{
    int x;

public:
    void setx(int i){x = i;}
    void print() { cout << x; }
};

class B : public A{
public:
    B()
    {
        setx(10);
    }
};

class C : public A{
public:
    C()
    {
        setx(20);
    }
};

class D : public B, public C{
public:
    D()
    {
        B::setx(60);
    }  
};

int main(){
    D d;
    d.C::print();

}