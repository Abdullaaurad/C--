#include<iostream>
#include<string>

class Person{
    std::string first;
    std::string last;

    public:
    static int k;
    void setFirstName(std::string firstName){
        first=firstName;
    } 
    void setLastName(std::string lastName){
        last=lastName;
    }
//    std::string first;
//    std::string last;
    int age;
    int MarksA;
    int MarksB;

    void printFullName(){
        std::cout <<"Full Name :" << first << " " << last << std::endl;
    }
};

int Person::k=2;

int main(){
    Person P1;
    P1.setFirstName("Abdulla");
    P1.setLastName("Aurad");
    
    P1.printFullName();
    printf("%d",Person::k);
    return 0;
}
 
//class- describes the structure
//object- example for specific a class;
//instance- another name for object
//Instantiating-creating an object from a class;
//data members-variables
//methods- functions


//if the last and first are in private we can directly assign it values 
//if it is in private first we need to get a value through the public and assign the variables values;