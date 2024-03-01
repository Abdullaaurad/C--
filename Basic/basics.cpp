#include<iostream>
#include<string.h>

struct student{
    std::string Name;
    long int NIC;
    int age;
    float height;
}student1;

int main(){

for(int i=0;i<5;i++){
    std::cout << i << std::endl;
}

/*
while(true){
    std::cout << "HI";
}
*/

int k=1;
do{
    k=k+1;
    std::cout << k;
}while(k<10);
/*
    int number;
    std::cout <<"Enter a number :";
    std::cin >> number ;
    std::cout << number << std::endl;

    std::cin.ignore();     //does the same like in getchar()
    char Array[20];
    std::cout << "Enter a string :";
    std::cin >> Array;
    std::cout << Array << std::endl;
    char c=getchar();    you can use this too like in C

   std::string Array2;
    std::cout << "Enter a string :";
    std::getline(std::cin , Array2);
    std::cout << Array2 ;

    std::cout << "Enter Name of student :";
    std::getline(std::cin,student1.Name);
    std::cout << student1.Name << std::endl;
*/
}
