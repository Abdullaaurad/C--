#include <iostream>

struct Rectangle {
// !In struct the access specifiers is predefined as public
    int length;
    int width;

    // Public member function to calculate area
    int calculateArea() {
        return length * width;
    }

private:
    // Private member function to calculate perimeter
    int calculatePerimeter() {
        return 2 * (length + width);
    }

public:
    // Public member function to display perimeter (using private function)
    void displayPerimeter() {
        std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
    }
};

int main() {
    Rectangle rect;   // ?Don't have to specify it as a struct like in C
    rect.length = 5;
    rect.width = 3;

    std::cout << "Area: " << rect.calculateArea() << std::endl;
    rect.displayPerimeter();

    // You cannot access calculatePerimeter() directly here, as it's private
    // rect.calculatePerimeter(); // This line would result in a compile-time error

    return 0;
}
