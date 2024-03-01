#include<iostream>

using namespace std;

class base{
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base{
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
}; 

int main(){
    /*
    base *p;
    derived obj1;
    p = &obj1;
    // Early binding because fun1() is non-virtual
    // in base
    p->fun_1();
    // Late binding (RTP)
    p->fun_2();
    // Late binding (RTP)
    p->fun_3();
    // Late binding (RTP)
    p->fun_4();*/
    
    derived obj2;
    /*
    obj2.fun_1();
    obj2.fun_2();
    obj2.fun_3();
    obj2.fun_4(4);
    */

    derived *q=&obj2;
    q->fun_1();
    q->fun_2();
    q->fun_3();
    q->fun_4(6);
    

    base obj3;
    base *r=&obj3;
    r->fun_1();
    r->fun_2();
    r->fun_3();
    r->fun_4();

    //there are no need to use virtual when we dont use pointers
    return 0;
}

