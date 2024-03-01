#include <iostream>

template<typename T>
class Pair {
private:
    T first;
    T second;
public:
    Pair(T f,T s) : first(f), second(s) {}
    void display(){
        std::cout << "(" << first << ", " << second << ")" << std::endl;
    }
};

int main() {
    Pair<int> intPair(10, 20);
    Pair<double> doublePair(3.14, 2.71);

    std::cout << "Integer Pair: ";
    intPair.display();

    std::cout << "Double Pair: ";
    doublePair.display();

    return 0;
}
