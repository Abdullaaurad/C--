#include <iostream>
#include <cmath>

class Radius;

class Radius {
private:
    double value;

public:
    Radius(double r = 0.0) : value((r < 0.0) ? 0.0 : r) {}

    void set(double r) {
        value = (r < 0.0) ? 0.0 : r;
    }

    double get() const {
        return value;
    }
};

class Circle {
private:
    Radius radius;

public:
    Circle() : radius(0.0) {}

    void setRadius(double r) {
        radius.set(r);
    }

    double getRadius() const {
        return radius.get();
    }

    double calculateArea() const {
        return M_PI * radius.get() * radius.get();
    }
};

int main() {
    Circle Circle1,Circle2;
    Circle1.setRadius(5.0);

    std::cout << "Radius: " << Circle1.getRadius() << std::endl;
    std::cout << "Area: " << Circle1.calculateArea() << std::endl;

    std::cout << "Radius: " << Circle2.getRadius() << std::endl;
    std::cout << "Area: " << Circle2.calculateArea() << std::endl;

    return 0;
}

