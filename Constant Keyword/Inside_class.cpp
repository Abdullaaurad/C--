#include <iostream>

class Circle {
public:
    Circle(double r) : radius(r) {}
    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    double calculateAreaWithConstParam(const double pi) const {
        return pi * radius * radius;
    }

    void modifyConstParam(const int& value)const { //when we do this not copy of the variable is send here the original is sent 
        //value++; cant do this;
        std::cout << "Original value: " << value << std::endl;
    }

private:
    double radius;
};

int main() {
    Circle circleObject(5.0);
    std::cout << "Radius: " << circleObject.getRadius() << std::endl;
    circleObject.setRadius(10.0);

    double area = circleObject.calculateAreaWithConstParam(3.14);
    std::cout << "Area: " << area << std::endl;

    // Calling a non-const member function with a const parameter
    int value = 42;
    circleObject.modifyConstParam(value);

    return 0;
}
