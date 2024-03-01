#include <iostream>
#include <string>

using namespace std;

class Animal1 {
public:
    // Virtual function to get the sound of the animal
    virtual string getSound() {
        return "Animal sound";
    }
};

class Animal2 {
public:
    // Virtual function to get the sound of the animal
    string getSound() {
        return "Animal sound";
    }
};

class Dog : public Animal1 {
public:
    // Override the getSound() function for Dog
    string getSound() override {
        return "Woof!";
    }
};

class Cat : public Animal2 {
public:
    // Override the getSound() function for Cat
    string getSound() {
        return "Meow!";
    }
};

int main() {
    // Creating instances of Animal, Dog, and Cat
    Animal1* p = new Animal1();
    Animal1* q = new Dog();
    Animal2* r = new Cat();        //we need virtual when we use pointer from base class to sub class

    // Calling getSound() on each object
    cout << "Animal sound: " << p->getSound() << endl;  // Output: "Animal sound"
    cout << "Dog sound: " << q->getSound() << endl;        // Output: "Woof!"
    Dog* s= new Dog();
    cout << "Dog sound: " << s->getSound() << endl;
    cout << "Cat sound: " << r->getSound() << endl;        // Output: "Meow!"

    // Deleting dynamically allocated memory
    delete p;
    delete q;
    delete r;
    delete s;

    return 0;
}
