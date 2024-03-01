#include <iostream>
using namespace std;

class Test
{
public:
    Test() { cout << "Constructor\n"; }
    ~Test() { cout << "Distructor\n"; }

    // void print(){
    //     cout<<"Hello\n";
    // }
};

int main()
{
    try
    {
        Test t1;
        throw 10;
    }
    catch(int i)
    {
        cout<<"Caught  "<<i;
    }


    
}