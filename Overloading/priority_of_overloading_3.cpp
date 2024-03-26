#include <iostream>

using namespace std;

void test(int x,int y=0){    //if we didn't specify a value for y than 0 is used
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}

void test(int x){
    cout<<"x="<<x<<endl;    
}

int main(){
    //test(5);   cant identify which to choose in between
    test(5,6);
    return 0;
}