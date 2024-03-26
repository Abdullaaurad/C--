#include<iostream>

using namespace std;

class Complex {
    int real;
    int imagi;

public:
    Complex() : real(0), imagi(0) {
        cout << "Inside the constructor" << endl;
    }

    friend Complex operator-(const Complex& c1, const Complex& c2);

    Complex operator+(Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imagi = imagi + c.imagi;
        return temp;
    }

    void display() {
        if (imagi < 0)
            cout << "Complex No: " << real << imagi << "i" << endl;
        else
            cout << "Complex No: " << real << "+" << imagi << "i" << endl;
    }

    Complex(int x, int y) : real(x), imagi(y) {
        cout << "Inside the constructor" << endl;
    }

    Complex(const Complex& c) {
        cout << "User Defined copy constructor" << endl;
        real = c.real;
        imagi = c.imagi;
    }

    ~Complex() {  //will be automatically executed after the end of the program
        cout << "Deallocate Memory" << endl;
    }
};

Complex operator-(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imagi = c1.imagi - c2.imagi;
    return temp;
}

int main() {
    Complex C1(3, 4);
    Complex C2(2, 3);

    C1 = C2 - C1;
    C1.display();

    Complex C4 = C1 + C2;
    C4.display();

    Complex C5 = C1;
    C5.display();



    return 0;
}
