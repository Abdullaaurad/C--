#include<iostream>

using namespace std;

int main(){
    char a;
    float b=100.5;

    a=b;   //will be assigned the ASCI character for 100 which is d
    cout<<"char ="<<a<<endl;
    cout<<"converted ="<<(int)a<<endl;
}