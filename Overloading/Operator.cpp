#include <iostream>

class SimpleNumber {
private:
    int value;

public:
    SimpleNumber(int v = 0) : value(v) {}

    SimpleNumber operator+(const SimpleNumber& other){
        return SimpleNumber(value + other.value);
    }

    int get() const {
        return value;
    }

    friend std::ostream& operator<<(std::ostream& ol, const SimpleNumber& num) {    //? can use any name for ostream like ol,out anything but you have to be consistent
        ol << num.value;
    }
};

int main() {
    int x = 5, y = 3;
    SimpleNumber num1(x);
    SimpleNumber num2(y);

    SimpleNumber sum = num1 + num2;
    std::cout << "num1: " << num1.get() << std::endl;
    std::cout << "num2: " << num2.get() << std::endl;
    std::cout << "Sum: " << sum.get() << std::endl;

    return 0;
}
