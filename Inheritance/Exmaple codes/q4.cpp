#include <iostream>
using namespace std;

class Chef
{
public:
    int age;
    void makeChicken()
    {
        cout << "The chef makes chicken" << endl;
    }

    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }

    void makeSpecialDish()
    {
        cout << "The chef makes special dish" << endl;
    }

    Chef()
    {
        cout << "Hi.. I am chef..." << endl;
    }
};

class ItalianChef : public Chef
{
public:
    void makePasta()
    {
        cout << "The chef makes pasta" << endl;
    }

    void makeSpecialDish()
    {
        cout << "The chef makes chicken parm" << endl;
    }

    ItalianChef()
    {
        cout << "Hi.. I am a chef born in Italy..." << endl;
    }
};

int main()
{
    Chef mychef;
    mychef.makeChicken();

    ItalianChef myItalianchef;
    myItalianchef.makeChicken();
    mychef.age = 30;
    mychef.makeSpecialDish();
    myItalianchef.makeSpecialDish();
}