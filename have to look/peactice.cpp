#include <iostream>
using namespace std;

class Birthday
{
    int day, month, year;

public:
    Birthday(int dd, int mm, int yy):month(mm),day(dd),year(yy)
    {
    }
    void getDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class People
{
    string name;
    Birthday bd;

public:
    People(string an, Birthday abd) : bd(abd), name(an) {}
    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Birthday: ";
        bd.getDate();
    }
};

int main()
{
    Birthday mybd(2, 3, 1979);
    People me("Supun", mybd);
    me.printInfo();
}