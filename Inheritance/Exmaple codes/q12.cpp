#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "\nThis is a vehicle";
    }
};

class Bus : public Vehicle
{
public:
    Bus()
    {
        cout << "\nThis is a bus";
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "\nThis is a car";
    }
};

int main()
{
    Bus obj1;
    Car obj2;;
}