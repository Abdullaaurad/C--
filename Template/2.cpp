#include <iostream>

using namespace std;

template<class T,class U,class V=double>
class A{
public:
    T x;
    U y;
    V z;
    static int count;
};

int main(){
    A<int, int> a;
    A<double, double> b;
    cout << sizeof(a) << "=";
    cout << sizeof(a.x) << ",";
    cout << sizeof(a.y) << ",";
    cout << sizeof(a.z) << endl;
    cout << sizeof(b) << "=";
    cout << sizeof(b.x) << ",";
    cout << sizeof(b.y) << ",";
    cout << sizeof(b.z) << endl;
    return 0;
}
