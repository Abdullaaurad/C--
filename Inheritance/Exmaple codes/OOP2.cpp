#include<iostream>
#include<string>

using namespace std;

class Car{
    public:
    string ChessiNo;
    string EngineNo;
    string color;

    void changecolor(string color,Car& C){
        C.color=color;
    }

    void print(string Name){
        cout << Name << endl;
    }

};
 
class BMW : public Car {
    public:

    void print(string Name){
        cout << "BMW No : " << Name << endl;
    }
};  

int main(){
    
    Car Car1;
    Car1.ChessiNo="Abdulla12345";
    Car1.EngineNo="V*8 Engine";

    BMW mine;
    mine.ChessiNo="BMW roadster";
    mine.EngineNo="Petrol95 only";
    Car1.changecolor("green",mine);

    Car1.print(mine.color);
    mine.print(mine.ChessiNo);
    Car1.print(Car1.ChessiNo);

    return 0;
}
