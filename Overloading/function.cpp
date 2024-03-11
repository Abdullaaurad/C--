#include <iostream>

class MathOperations {
public:
    //cant use overloading with just return type different functions have to have a difference in parameters count,data type or both
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    double add(int a, double b) {                             //By changing the orders also we can overload functions
        std::cout<< "int double" << std::endl;
        return a + b;
    }

    double add(double a, int b) {
        std::cout<< "double int" << std::endl;
        return a + b;
    }

    std::string add(const std::string& str1, const std::string& str2) {
        return str1 + str2;
    }
};

int main() {
    MathOperations math;
    std::cout << "Sum :" << math.add(5, 10) << std::endl;
    std::cout << "Sum : " << math.add(3.5, 2.5) << std::endl;
    std::cout << "Sum :" << math.add(5, 10.2) << std::endl;
    std::cout << "Sum : " << math.add(3.5, 2) << std::endl;
    std::cout << "Concatenation : " << math.add("Hello ", "World") << std::endl;
    
    return 0;
}
