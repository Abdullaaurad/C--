#include <iostream>

int x=5;

class OuterClass {
public:
    int x=10;
    // Constructor
    OuterClass(int data) : data(data) {}

    // Outer class member function
    void outerFunction() {
        std::cout << "OuterClass::outerFunction() called." << std::endl;
    }

    // Nested class
    class InnerClass {
    public:
        int x;
        int y;
        // Constructor
        InnerClass(int innerData) : innerData(innerData) {}

        // Inner class member function
        void innerFunction() {
            std::cout << "InnerClass::innerFunction() called." << std::endl;
            std::cout << "InnerData: " << innerData << std::endl; // Accessing innerData
        }

    private:
        int innerData;
    };

private:
    int data;
};

int main() {

    OuterClass outerObj(42);
    outerObj.outerFunction();
    OuterClass::InnerClass innerObj(10);
    innerObj.innerFunction();
    /*
    InnerClass hi(5);
    std::cout << hi.x << std::endl; 
    */   // !Can't declare it outside the without specifying Outer class
    std::cout << outerObj.x << std::endl;;

    return 0;
}
