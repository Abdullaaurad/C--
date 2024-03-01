#include<iostream>
#include<string>

using namespace::std;

class Flyable {
public:
    virtual void fly()=0;                  //reduces error when the same function have different implementation in derived calsses or sub classes
};                                 //Changes to the base class interface can be propagated to derived classes, reducing potential errors.

class Swimmable {
public:
    virtual void swim() = 0;
};

// Common abstract base class combining Flyable and Swimmable
class Amphibious : public Flyable, public Swimmable {
};

// Concrete class inheriting from Amphibious
class Duck : public Amphibious {
public:
    void fly(){
        std::cout << "Duck can fly" << std::endl;
    }

    void swim() override {                            //this override doesn't do anything other than telling the user this functions is overridden
        std::cout << "Duck can swim" << std::endl;
    }
};

class Fish : Swimmable{
public:
    void swim(){
        std::cout << "Fish can swim" << std::endl;    
    } 
};

int main() {
    Duck duck;
    Fish Nemo;
    duck.fly();  // Output: Duck is flying!
    duck.swim(); // Output: Duck is swimming!
    Nemo.swim();
}