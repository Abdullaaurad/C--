#include <iostream>

using namespace std;

class Circle{
private:
    double r;

public:
    void get(double r){
        this->r=r;
    }
    double base(){
        return 3.14*r*r;
    }
};

class Cylinder{
private:
    Circle circle;
    double height;
    double base;
public:
    Cylinder(double h,double r){
        this->height=h;
        circle.get(r);
        base=circle.base();
    }
    
    double radius(){
        return (circle.base()*height);
    }
};

int main(){
    Cylinder C1(21,3.5);
    double Area=C1.radius();
    cout << "Total Area :" << Area << endl;
    return 0;
}       