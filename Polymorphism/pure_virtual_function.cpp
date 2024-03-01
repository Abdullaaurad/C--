#include <iostream>

using namespace std;

class Shape{
public:
    virtual void getArea(int x=0,int y=0)=0;
};

class Circle: public Shape{
public:
    void getArea(int ar, int x=1){
        cout << "Area of the circle" << (22*ar*ar)/7 << endl;
    }
};

class Rectangle: public Shape{
public:
    void getArea(int aw, int al){
        cout << "Area of the circle" << (aw*al) << endl;
    }
};

int main(){
    Circle C1;
    C1.getArea(7);
    Rectangle R1;
    R1.getArea(5,7);
    return 0;
}