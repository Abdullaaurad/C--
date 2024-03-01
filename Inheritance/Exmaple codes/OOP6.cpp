#include<iostream>
#include<string>

using namespace std;

class Vehicle{
public:
    int a=10;

private:
    int b=20;

protected:
    int c=30;
};

class Electric : public Vehicle{
public:
    void  print(){
        cout << c  << endl;
    }
};

int main(){
    Electric Car1;
    cout << Car1.a  << endl;
    Car1.print();
}