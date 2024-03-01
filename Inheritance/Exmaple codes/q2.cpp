#include <iostream>
using namespace std;

class A
{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class B: public A
{
    //x is public
    //y is protected
    //z is not accesible from b
};

class c: protected A
{
    //x is protected
    //y is protected
    //z is not accesible from c
};

class B: private A
{
    //x is private
    //y is private
    //z is not accesible from d
};


