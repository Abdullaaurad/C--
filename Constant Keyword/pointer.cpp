#include <iostream>

using namespace std;

int main(){
    const int* ptr;
    int i=10;
    int j=20;
    ptr=&i;
    cout << "value of i =" << *ptr << endl;
    cout << "value of pinter =" << ptr << endl;
    ptr=&j; //can change the variable that it points to
    //*ptr=30; cant modify the value it points to 
    cout << "value of i =" << *ptr << endl;
    cout << "value of pinter =" << ptr << endl;
}