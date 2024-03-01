#include <iostream>

using namespace std;

void display(double x){
    cout << "double =" << x << endl; 
}

int main(){
    display(4);
    display(4.5);
    display(1.23456789);
    return 0;
}