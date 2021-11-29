#include <iostream>
using namespace std;
int main(){
	int id=01;
	string name="Chhaileng", gender="Male";
	float avg=89.58;
	char grade='A';

	cout<<"Style1"<<endl;
	cout<<"===========Student Information==========="<<endl;
	cout<<"Student ID= "<<id<<endl;
	cout<<"Student Name= "<<name<<endl;
	cout<<"Student Gender= "<<gender<<endl;
	cout<<"Student Average= "<<avg<<endl;
	cout<<"Student Grade= "<<grade<<endl;

	cout<<"Style2"<<endl;
	cout<<"===========Student Information==========="<<endl;
	cout<<"ID\tName\tGender\tAverage\tGrade"<<endl;
	cout<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<avg<<"\t"<<grade<<endl;
	return 0;
}