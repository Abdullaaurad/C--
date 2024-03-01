#include <iostream>
using namespace std;

void fun(int *ptr, int x) {
    if (ptr == NULL){
        throw ptr;
    }
    if (x == 0){
        throw x; 
    }
} 

int main() {
    int y = 0;
    try {
        fun (NULL, y); 
    } 
    catch(...){ 
        cout << "Caught exception from fun()";
    }
    return 0; 
}
