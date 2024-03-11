#include <iostream>

using namespace std;

class hi{
public:
    int value;

    hi(int value){
        value=20;
        this->value=value;
    }
};

int main(){
    hi h1(5);
    cout << h1.value;
}