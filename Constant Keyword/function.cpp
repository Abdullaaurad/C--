#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}
    int getValue() const {
        // Some code here (read-only operations are allowed)
        std::cout << "Reading the value: " << value << std::endl;
        return value;
    }

private:
    int value;
};

int main() {
    MyClass myObject(42);
    int result = myObject.getValue();
    std::cout << "Returned value: " << result << std::endl;

    // Attempt to modify the private member 'value' from outside the class
    // This will result in a compilation error because getValue is a const member function.

    return 0;
}
