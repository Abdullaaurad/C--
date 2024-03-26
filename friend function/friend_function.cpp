#include<iostream>
using namespace std;

class triangle {
    float a;
    float circumference;
    float area;
    friend void print(triangle);
    void friend print_k();

public:
    void set(float length) {
        this->a = length;
        circumference = a * 3;
        area = (1.73f * a * a);
    }
    friend class x;
};

void print(triangle T1) {
    cout << "Circumference: " << T1.circumference << endl;
    cout << "Area: " << T1.area << endl;
}

void print_k() {
    cout << "hi" << endl;
}

class x {
public:
    void print(triangle T1) {
        cout << "Circumference: " << T1.circumference << endl;
        cout << "Area: " << T1.area << endl;
    }
};

int main() {
    triangle T1;
    T1.set(5.2f);
    print(T1);
    x obj_x;
    obj_x.print(T1);
    print_k();

    return 0;
}

