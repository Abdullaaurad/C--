#include <iostream>
using namespace std;

class Engine{
private:
    int cylinders; // Number of cylinders 
    double liters; // Capacity in liters
public: 
    Engine(int c = 4, double l = 1.3); // Constructor 
};

Engine::Engine(int c, double l) : cylinders(c), liters(l) { 
    cout<<"Constructor Engine called "<<endl;
    cout<<"Cylinders: "<<cylinders<<endl;
    cout<<"Liters: "<<liters<<endl;
}


class Car { 
private: 
    int modelNumber;    // Model number 
    Engine motor;         // Car's engine
public: 
 
    Car(int m, int c, double l);
}; 

Car::Car(int m, int c, double l):modelNumber(m), motor(c, l) {
    cout<<"Constructor Car called"<<endl;
    cout<<"Model No: "<<modelNumber<<endl;
}

int main(){
    Car c(2,3,2.3);
    return 0;
}
