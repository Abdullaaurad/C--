#include<iostream>

using namespace std;

class A{
public:
    int a;
};

class B: public A{
public:
    int b;
};

class C: public A{
public:
    int c;
};

class D: public B, public C{
public:
    int d;
};

int main(){
    D q;
    q.C::a=10;
    q.B::a=100;
    q.b=20;
    q.c=30;
    q.d=40;
    cout << "\n A in B=" << q.B::a ;
    cout << "\n A in C=" << q.C::a ;
    cout << "\n B=" << q.b;
    cout << "\n C=" << q.c;
    cout << "\n D=" << q.d;
    return 0;
}