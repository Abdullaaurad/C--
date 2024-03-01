#include<iostream>
#include<string.h>

using namespace std;

template <typename T>
T MyMax(T x,T y){
    return (x>y)? x: y;
}

template <typename T,typename U>
T MyMul(T x,U y){
    return (x*y);
}

int main(){

    cout << MyMax<int>(5,7) << endl;
    cout << MyMax<double>(3.2,7.1) <<endl;
    cout << MyMax<char>('a','b') << endl;
    cout << MyMax<string>("Abdulla","Abdullb") << endl;
    int x=7, y=4;
    int* ptr1=&x;
    int* ptr2=&y;
    cout << *MyMax<int*>(ptr1,ptr2) << endl;

    cout << MyMul<double,int>(6.3,8) << endl; 
    //Data type of the output will depend on the first type we are specify to the function call
    cout << MyMul<float,int>(2.2,2) <<endl;
        
    return 0;
} 