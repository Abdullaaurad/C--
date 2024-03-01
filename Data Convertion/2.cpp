#include<iostream>

using namespace std;

class Time {
    int hours;
    int mins;

public:
    Time() : hours(0), mins(0) {}

    Time(int t) {
        hours = t / 60;
        mins = t % 60;
    }

    void Display() {
        cout << "Time = " << hours << " hrs and " << mins << " min" << endl;
    }
};

int main() {
    Time T1;
    int dur = 95;
    T1 = dur;
    T1.Display();
    return 0;
}
