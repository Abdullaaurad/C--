#include <iostream>

class Example {
public:

    static int x;
    int y=42;

    void normalFunction() {
        std::cout << "Value of static x=" << x << std::endl;
        std::cout << "Value of int y="<< y << std::endl;
    }

    static void staticFunction() {
        std::cout << "\nThis is a static function." << std::endl;
        std::cout << "Value of static x=" << x << std::endl;
        // std::cout << "Value of int y="<< y << std::endl;
        // we cant access a non static variable from a static function
    }
};

int Example::x=4;

int main() {
    Example obj;
    obj.normalFunction();
    Example::staticFunction();

    return 0;
}
