#include<iostream>
#include<string>

class New{
    virtual void CheckMarks(int)=0;
    virtual void CheckMarks(char)=0;
};

class Person:New{
public:
    int age;
    int MarksA;
    int MarksB;

    void CheckMarks(int X){
        if(X>70){
            std::cout << "A" << std::endl;
        }
        else if(X>60){
            std::cout << "B" << std::endl;
        }
        else if(X>50){
            std::cout << "C" << std::endl;
        }
        else if(X>40){
            std::cout << "D" << std::endl;
        }
        else{
            std::cout << "F" << std::endl;
        }
    }

    void CheckMarks(char No){
        if(No=='A'){
            if(MarksA>70){
                std::cout << "A" << std::endl;
            }
            else if(MarksA>60){
                std::cout << "B" << std::endl;
            }
            else if(MarksA>50){
                std::cout << "C" << std::endl;
            }
            else if(MarksA>40){
                std::cout << "D" << std::endl;
            }
            else{
                std::cout << "F" << std::endl;
            }
        }
        else{
            if(MarksB>70){
                std::cout << "A" << std::endl;
            }
            else if(MarksB>60){
                std::cout << "B" << std::endl;
            }
            else if(MarksB>50){
                std::cout << "C" << std::endl;
            }
            else if(MarksB>40){
                std::cout << "D" << std::endl;
            }
            else{
                std::cout << "F" << std::endl;
            }
        }
    }

private:
    std::string first="new";
    std::string last;

public:
    void print(){
        std::cout<<first <<" " << last <<std::endl;
    }

    int add(int a,int b){
        return a+b;
    }

    double add(double a,double b){
        return a+b;
    }

    void input(std::string last){
        this->last=last;
    }
};

int main(){
    Person P1;
    P1.input("one");
    P1.print();  

    int k=P1.add(2,3);
    double l=P1.add(2.3,4.5);
    P1.MarksA=60;
    P1.MarksB=99;
    P1.CheckMarks(71);
    P1.CheckMarks('A');

    std::cout << "integer value :" << k << std::endl;
    std::cout << "double value :" << l << std::endl;    
    return 0;
}