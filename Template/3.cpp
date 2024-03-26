#include <iostream>
#include <string.h>

using namespace std;

template <typename T, typename U>
class A{
public:
    T x;
    U y;
    A(T l, U k){
        x=l;
        y=k;
    }
    T print(){
        return x+y;
    }
};

int main(){
    A<int,double> a(3,1.1);
    cout << a.print() << endl;
    A<double,int> b(1.1,3);
    cout << b.print() << endl;
    A<int,char> c(2,'a');
    cout << c.print() << endl;
    A<char,char> d('a','a');
    cout << d.print() << endl;
    A<string,string> e("a","a");
    cout << e.print() << endl;
    return 0;
}