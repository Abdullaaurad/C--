#include <iostream>

using namespace std;

int print(int x){
    static int y=x;
    for(int i=0;i<y;i++){
        cout<<i<<"  ";
    }
}

int main(){
    print(5);

    print(6);
    return 0;
}