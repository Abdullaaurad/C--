#include <iostream>
using namespace std;

int main()
{
    int x = -1;

    cout << "Before try\n";
    try
    {
        cout << "Inside try\n";
        if (x < 0)
        {
            throw x;
            cout << "Inside try throw block\n";
        }
    }
    catch (char *ptr)
    {
        cout << "Exception Caught\n";
        x=100;
    }
    cout << "After catch\n"<<x;
}