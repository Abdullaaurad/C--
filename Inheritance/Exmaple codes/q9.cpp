#include <iostream>
using namespace std;

class ClassA
{
public:
    int a;
};

class ClassB : virtual public ClassA
{
public:
    int b;
};

class ClassC : virtual public ClassA
{
public:
    int c;
};

class ClassD :  public ClassB, public ClassC
{
public:
    int d;
};

int main()
{
    ClassD obj;
    // obj.a=10 //compiler error // a is ambiguous
    obj.a = 10;
    obj.a = 100;
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "\nA in B: " << obj.a;
    cout << "\nA in C: " << obj.a;
    cout << "\nB: " << obj.b;
    cout << "\nC: " << obj.c;
    cout << "\nD: " << obj.d;

    // a is 100 because we have only one copy of ClassA
}