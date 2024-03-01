#include <iostream>

using namespace std;

void test(int x,int y=0){
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}

void test(int x){
    cout<<"x="<<x<<endl;    
}

int main(){
    //test(5);   cant identify which to choose in between
    return 0;
}