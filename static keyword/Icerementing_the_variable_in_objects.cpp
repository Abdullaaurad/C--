#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    static int totalCount;
    int id;
    string name;
    int age;

public:
    Person(const string& name, int age) : name(name), age(age) {
        totalCount++;
        id = totalCount;
    }

    virtual void getdata() = 0; // Pure virtual function
    virtual void putdata() const = 0; // Pure virtual function

    int getID() const {
        return id;
    }
};

int Person::totalCount = 0; // Initialize static variable

class Doctor : public Person {
private:
    int doctor_specialist;

public:
    Doctor(const string& name, int age, int specialist) : Person(name, age), doctor_specialist(specialist) {}

    void getdata() override {
        cout << "Enter doctor's name: ";
        cin >> name;
        cout << "Enter doctor's age: ";
        cin >> age;
        cout << "Enter doctor's specialist: ";
        cin >> doctor_specialist;
    }

    void putdata() const override {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Doctor ID: " << getID() << endl;
        cout << "Specialist: " << doctor_specialist << endl;
    }
};

class Patient : public Person {
private:
    int admission_date;

public:
    Patient(const string& name, int age, int admission_date) : Person(name, age), admission_date(admission_date) {}

    void getdata() override {
        cout << "Enter patient's name: ";
        cin >> name;
        cout << "Enter patient's age: ";
        cin >> age;
        cout << "Enter admission date: ";
        cin >> admission_date;
    }

    void putdata() const override {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Patient ID: " << getID() << endl;
        cout << "Admission Date: " << admission_date << endl;
    }
};

int main() {
    Doctor d1("John", 35, 1);
    Patient p1("Alice", 25, 20240219);

    cout << "Doctor Details:" << endl;
    d1.putdata();

    cout << "\nPatient Details:" << endl;
    p1.putdata();

    return 0;
}
