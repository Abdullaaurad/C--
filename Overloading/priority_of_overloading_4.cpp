#include <iostream>

using namespace std;

void test(int x,int y=0){
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}

int main(){
    test(5);   
    return 0;
}