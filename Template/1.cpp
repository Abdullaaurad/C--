#include <iostream>

using namespace std;

template<typename T>
int func(const T&c){
    static int count=0;
    return ++count;
}

int main(){
    cout << func<int> (1);
    cout << func<int> (12);
    cout << func<double>(12.1)<<", ";
    cout << func<int>(1);
    return 0;  
}