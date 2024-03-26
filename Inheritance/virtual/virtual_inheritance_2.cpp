#include <iostream>
using namespace std;

class Person {
  int x;
public:
  Person() {
    cout << "Person class constructor (no argument)" << endl;
    cout << x << endl;
  }
  Person(int x) {
    cout << "Person class constructor (with argument: " << x << ")" << endl;
  }
};

class Faculty :virtual public Person {
public:
  Faculty(int x) : Person(x) {
    cout << "Faculty class constructor (with argument: " << x << ")" << endl;
    cout << x << endl;
  }
};

class Student :virtual public Person {
public:
  Student(int x) : Person(x) {
    cout << "Student class constructor (with argument: " << x << ")" << endl;
    cout << x << endl;
  }
};

class TA : public Student, public Faculty {
public:
  TA(int x) : Student(x), Faculty(x) {
    cout << "TA class constructor (with argument: " << x << ")" << endl;
    cout << x << endl;
  }
};

int main() {
  TA ta1(30);
  return 0;
}
