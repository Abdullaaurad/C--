#include<iostream>
#include<string>

class vehicle {
public:
    std::string EngineNo;
    std::string VehicleNo;
    std::string color;

    vehicle(std::string engineNo, std::string vehicleNo, std::string clr)
        : EngineNo(engineNo), VehicleNo(vehicleNo), color(clr) {}

    void print();
};

void vehicle::print(){
    std::cout << "EngineNo: " << EngineNo << std::endl;
    std::cout << "VehicleNo: " << VehicleNo << std::endl;
    std::cout << "Color: " << color << std::endl;
}

int main() {
    vehicle V1 = vehicle("ABCDE", "A1B2C3", "green");
    vehicle V2 = vehicle("New","Wrong","red");
    V1.print();
    V2.print();
    return 0;
}
