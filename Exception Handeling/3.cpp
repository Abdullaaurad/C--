#include <iostream>
using namespace std;

class Exceptionptr {
public:
    int value;

    Exceptionptr(int val) : value(val) {}
};

class Exceptionval {
public:
    int value;

    Exceptionval(int val) : value(val) {}
};

void fun(int *ptr, int x) {
    if (ptr == NULL){
        throw Exceptionptr(reinterpret_cast<int>(ptr));     //when one is thrown other codes won't run
    }
    if (x == 0){                                             //if ptr==NULL than this part won't happen 
        throw Exceptionval(x+1);
    }
}

int main() {
    int y = 0;
    int *ptr=(int *)malloc(sizeof(int));
    try {
        fun(ptr, y);
    }
    catch(Exceptionptr &e){
        cout << "Caught exception from ptr value: " << e.value;
    }
    catch(Exceptionval &k){
        cout << "Caught exception from val value: " << k.value;
    }

    return 0;
}
