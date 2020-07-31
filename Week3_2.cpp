#include<iostream>
using namespace std;
void F_func(float);
int main()
{
	float C ;
	cout<<"Enter Celsius : ";
	cin>>C;
	F_func(C);
	return 0;
}
void F_func(float C)
{
	float F;
	F=C*1.8+32;
	cout<<"The Fahrenheit is "<<(F>=70 ? "HOT":"COOL")<<endl;
}
