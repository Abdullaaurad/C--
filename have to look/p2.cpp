#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of class A is called\n";
    }
    void anyerror()
    {
        cout << "Sorry, there is an error\n";
    }
};

int main()
{
    A a;
    try
    {
        throw a;
    }
    catch (A aa)
    {
        aa.anyerror();
    }
    cout << "Error handled\n";
}