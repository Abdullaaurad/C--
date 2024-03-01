#include<iostream>
#include<string.h>

using namespace std;

template <class T1,class T2>    
//Can use <typename T1,typename T2> as well
//No difference using each other
class Test{
    T1 a;
    T2 b;
public:
    Test(T1 x,T2 y){
        a=x;
        b=y;
    }
    void show(){
        cout<< a << "and" << b << endl;
    }
};

int main(){
    
    Test <float,int> test1(1.23,12);
    Test <int,char> test2(100,'W');
    test1.show();
    test2.show();
    return 0;
}