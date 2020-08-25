#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*int num;
	char x;
	string y;
	cout<<"Enter Decimal Number : ";
	cin>>num;

	while(num!=0)
	{
		if (num%2==1) x='1';
		else x='0';
		num/=2;
		y=x+y;
	}

	cout<<"Binary : "<<y<<endl;*/

	//----------------------------------------------------------------------------------------------------------------------------------------------------

	int num1,num2,x,y;
	string bin,oxt;
	
	cout<<"Enter Decimal Number : ";
	cin>>num1;
	num2=num1;
	while(num1!=0)
	{
		x=num1%2;
		num1/=2;
		bin=to_string(static_cast<long long>(x))+bin;
	}
	while(num2!=0)
	{
		y=num2%8;
		num2/=8;
		oxt=to_string(static_cast<long long>(y))+oxt;
	}
	cout<<"Binary : "<<bin<<endl;
	cout<<"Oxtal  : "<<oxt<<endl;
	system("pause");

	return 0;
}