#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int x = 0, int y = 1) : numerator(x), denominator(y) {}
    friend istream& operator>>(istream& input, Fraction& c);    
    friend ostream& operator<<(ostream& output, const Fraction& c);
};

istream& operator>>(istream& input, Fraction& c) {
   input >> c.numerator >> c.denominator;
    return input;
}

ostream& operator<<(ostream& output, const Fraction& c) {
    output << c.numerator << "/" << c.denominator;
    return output;
}

int main() {
    Fraction X;
    cout << "Enter a numerator and denominator of Fraction: ";
    cin >> X;
    cout << "Fraction is: " << X;
    return 0;
}

/*
#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int x = 0, int y = 1) : numerator(x), denominator(y) {}

    friend istream& operator>>(istream& input, Fraction& c) {
        input >> c.numerator >> c.denominator;
        return input;
    }

    friend ostream& operator<<(ostream& output, const Fraction& c) {
        output << c.numerator << "/" << c.denominator;
        return output;
    }
};

int main() {
    Fraction X;
    cout << "Enter a numerator and denominator of Fraction: ";
    cin >> X;
    cout << "Fraction is: " << X;
    return 0;
} 
*/