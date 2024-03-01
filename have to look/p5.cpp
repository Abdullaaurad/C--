#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 10;
        }
        catch (int n)
        {
            cout << "Handled partially\n";
        }
        throw 'a';
    }
    catch (char n)
    {
        cout << "Handled remanining\n";
    }
}