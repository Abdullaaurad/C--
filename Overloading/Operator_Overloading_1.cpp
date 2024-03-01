#include <iostream>

using namespace std;

class Marks{
    int intmark;
    int extmark;

public:
    Marks(){
        intmark=0;
        extmark=0;
    }
    Marks(int im,int em){
        intmark=im;
        extmark=em;
    }
    void display(){
        cout << intmark << endl << extmark << endl;
    }
    Marks operator|(Marks m){
        Marks temp;
        temp.intmark=intmark+m.intmark;
        temp.extmark=extmark+m.extmark;
        return temp;
    }

    Marks operator+(){
        intmark=intmark+extmark;
    }
};

int main(){
    Marks m1(10,20),m2(30,40);
    Marks m3=m1|m2;   //when we call this function it will set the base object as m1 and sets m2 as parameter to the function
    m3.display();
    +m1;
    m1.display();  //intmark is at the start is 10
    return 0;
}