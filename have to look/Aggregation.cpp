#include <iostream>
using namespace std;

class Wheel
{
    int diameter;

public:
    Wheel(int ad)
    {
        diameter = ad;
    }
    int getDiameter()
    {
        return diameter;
    }
};

class Engine
{
    int cc;

public:
    Engine(int acc)
    {
        cc = acc;
    }
    int getCC()
    {
        return cc;
    }
};

class Car
{
    Wheel frontLeft, frontRight, rearLeft, rearRight;
    Engine myEngine;
    int passengers;

public:
    Car(int wheelDiameter, int enginecc, int apassengers) : frontLeft(wheelDiameter),
                                                            frontRight(wheelDiameter),
                                                            rearLeft(wheelDiameter),
                                                            rearRight(wheelDiameter),
                                                            myEngine(enginecc)
    {
        passengers = apassengers;
    }
    void showSelf()
    {
        cout << "All 4 wheels are" << frontLeft.getDiameter() << " in size" << endl;
        cout << "Engine capacity is " << myEngine.getCC() << endl;
        cout << passengers << " passengers can travel in this car" << endl;
    }
};

int main()
{
    Car mycar(160, 1500, 4);
    mycar.showSelf();
}