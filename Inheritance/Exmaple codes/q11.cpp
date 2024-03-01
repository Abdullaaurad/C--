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

class fourwheeler : public Vehicle
{
public:
    fourwheeler()
    {
        cout << "\nObjects with a four wheel are vehicles";
    }
};

class Car : public fourwheeler
{
public:
    Car()
    {
        cout << "\nCar has 4 wheels";
    }
};

int main()
{
    Car obj;
}