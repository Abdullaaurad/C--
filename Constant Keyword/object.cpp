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

private:
    double radius;
};

int main() {
    const Circle circleObject(5.0);
    std::cout << "Radius: " << circleObject.getRadius() << std::endl;

    
    // circleObject.setRadius(10.0); // Error: member function 'setRadius' is not viable: 'this' argument has type 'const Circle
    // Attempting to call a non-const member function on a const object will result in a compilation error:
    return 0;
}
