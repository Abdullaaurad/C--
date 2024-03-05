#include<iostream>

using namespace std;

class triangle {
    float a;
    float circumference;
    float area;

    void friend print(triangle);

public :
    void set(float length) {
        this->a = length;
        circumference = a * 3;
        area = (1.73f * a * a);
    }
};

void print(triangle T1) { //have to specify the object that we are allowing to access
    cout << "Circumference: " << T1.circumference << endl;
    cout << "Area: " << T1.area << endl;
}

int main() {
    triangle T1;
    T1.set(5.2f);
    //cout << "Circumference: " << T1.circumference << endl;
    //cout << "Area: " << T1.area << endl;
    //cant print because the circumference and area are private
    print(T1);

    return 0;
}
