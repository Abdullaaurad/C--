#include <iostream>

using namespace std;

void display(float x){
    cout << "float =" << x << endl; 
}

void display(double x){
    cout << "double =" << x << endl; 
}

int main(){
    //display(4);  doesn't allow because there are too many functions to choose
    display(4.5f);
    display(1.23456789);
    return 0;
}