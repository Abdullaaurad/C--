#include <iostream>
using namespace std;

template <class T,class U,class V=double>
class A{
    T x;
    U y;
    V z;
    static int count;
};

int main()
{
    A<int,int>a;
    A<double,double>b;
    cout << sizeof(a) << ", ";
    cout << sizeof(b) << endl;
    return 0;
}