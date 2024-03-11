#include <iostream>

class Triangle {
private:
    float a;
    float circumference;
    float area;

    friend void print(Triangle);

public:
    Triangle(float length);
};

Triangle::Triangle(float length) {     // can define destructor outside the class too
    this->a = length;
    circumference = a * 3;
    area = (1.73f * a * a);
}

void print(Triangle T1) {
    std::cout << "Circumference: " << T1.circumference << std::endl;
    std::cout << "Area: " << T1.area << std::endl;
}

int main() {
    // Create an instance of Triangle with constructor
    Triangle T1(5.2f);

    // Use friend function to print the values
    print(T1);

    return 0;
}
