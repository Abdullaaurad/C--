#include<iostream>
#include<string.h>
using namespace std;

//defining the structure date
struct date{
	int day;
	char month[10];
	private:
	int year=2020; 
	public:
	void printYear()
	{
		cout<<"Year: "<<year<<endl;
	}
}; // end of structure definition

int main()
{
	date today;
	today.day=28;
	strcpy(today.month,"October");
	
	cout<<"Day:"<<today.day
		<<" Month:"<<today.month;
		today.printYear();	
}

