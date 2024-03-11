#include <iostream>

struct Rectangle {
    int length;
    int width;

    // Member function to calculate area
    int calculateArea() {
        return length * width;
    }

    // Member function to calculate perimeter
    int calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    rect.length = 5;
    rect.width = 3;

    std::cout << "Area: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;

    return 0;
}
