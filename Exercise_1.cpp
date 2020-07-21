#include<iostream>
#include<string>
#include<math.h>
using namespace std;
void main()
{
	/*cout<<"*****Exercise 1*****\n";
	string name;
	short birth,age;
	
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Year of birth : ";
	cin>>birth;
	
	age = 2563-birth;
	cout<<"********************\n";
	cout<<"Your Age = "<<age<<endl;
	*/
	cout<<"*****Exercise 2*****\n";
	string name;
	float W,H,bmi,d;
	
	cout<<"Enter Name   : ";
	cin>>name;
	cout<<"Enter Weight : ";
	cin>>W;
	cout<<"Enter High   : ";
	cin>>H;
	float H_100;
	H_100 = H/100;
	bmi = W/(H_100*H_100);
	cout<<"BMI = "<<bmi<<endl;
	d = W/pow(H/100,2);
	cout<<d<<endl;
}