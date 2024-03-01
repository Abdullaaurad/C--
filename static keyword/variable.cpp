#include <iostream>

void count_a(){
    static int a;
    std::cout << a ;
    a++;
}

void count_b(){
    int b=0;
    std::cout << b;
}

int main(){
    std::cout << "With static keyword :" ;
    for(int i=0;i<4;i++){
        count_a();
    }
    std::cout << "\nWithout static keyword :";
    for(int i=0;i<4;i++){
        count_b();
    }    
}