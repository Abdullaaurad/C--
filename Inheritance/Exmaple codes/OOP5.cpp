#include<iostream>
#include<string>

class Vehicle {
public:
    std::string EngineNo;
    std::string VehicleNo;
    std::string color;

    void print() {
        std::cout << "EngineNo: " << EngineNo << std::endl;
        std::cout << "VehicleNo: " << VehicleNo << std::endl;
        std::cout << "Color: " << color << std::endl;
    }

    void get(std::string engineNo, std::string vehicleNo, std::string clr) {
        EngineNo = engineNo;
        VehicleNo = vehicleNo;
        color = clr;
    }
};

class Electric : private Vehicle {
public:
    int Range;
    int Capacity;

    void print(){
        Vehicle::print();
        std::cout << "Range: " << Range << std::endl;
        std::cout << "Capacity: " << Capacity << std::endl;
    }
/*
    void get(std::string engineNo, std::string vehicleNo, std::string clr, int range, int capacity) {
        Vehicle::get(engineNo, vehicleNo, clr);
        Range = range;
        Capacity = capacity;
    }
*/
    void get(std::string engineNo, std::string vehicleNo, std::string clr, int range, int capacity);
};

class Petrol: Vehicle {
public:
    int Range;
    int Capacity;

    void print(){
        Vehicle::print();
        std::cout << "Range: " << Range << std::endl;
        std::cout << "Capacity: " << Capacity << std::endl;
    }

    void get(std::string engineNo, std::string vehicleNo, std::string clr, int range, int capacity);

};

void Petrol::get(std::string engineNo, std::string vehicleNo, std::string clr, int range, int capacity) {
    Vehicle::get(engineNo, vehicleNo, clr);
    Range = range;
    Capacity = capacity;
}

void Electric ::get(std::string engineNo, std::string vehicleNo, std::string clr, int range, int capacity) {
    Vehicle::get(engineNo, vehicleNo, clr);
    Range = range;
    Capacity = capacity;
}

int main() {
    Electric Car1;
    Car1.get("E123", "EV1", "Blue", 200, 5);
    Car1.print();

    Petrol Car2;
    Car2.get("P456", "PV1", "Red", 500, 50);
    Car2.print();

    return 0;
}
