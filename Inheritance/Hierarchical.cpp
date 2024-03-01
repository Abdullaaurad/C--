#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int numWheels;
    string brand;
    string model;
    string color;

public:
    Vehicle(int wheels, const string& br, const string& mdl, const string& col)
        : numWheels(wheels), brand(br), model(mdl), color(col) {
            cout << "Vehicle constructor called." << endl;
    }

    virtual void display() const {
        cout << "Vehicle Details:" << endl;
        cout << "Number of Wheels: " << numWheels << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
    }
};

class FourWheelVehicle : public Vehicle {
public:
    FourWheelVehicle(const string& br, const string& mdl, const string& col)
        : Vehicle(4, br, mdl, col) {
            cout << "FourWheelVehicle constructor called." << endl;
    }
};

class Car : public FourWheelVehicle {
public:
    Car(const string& br, const string& mdl, const string& col)
        : FourWheelVehicle(br, mdl, col) {
            cout << "Car constructor called." << endl;
    }

    void display() const override {
        cout << "Car Details:" << endl;
        Vehicle::display(); // Invoke base class display
    }
};

int main() {
    Car c("Toyota", "Corolla", "Blue");
    c.display();

    return 0;
}
