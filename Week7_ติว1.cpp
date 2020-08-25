#include<iostream>
using namespace std;
int main()
{
	int money,B1000,B500,B100;

	cout<<"Enter money : ";
	cin>>money;

	while(money<=100 || money>=20000)
	{
		cout<<"Sorry, please enter money (100 - 20000) : ";
		cin>>money;
	}

	B1000=money/1000;
	money%=1000;
	B500=money/500;
	money%=500;
	B100=money/100;
	money%=100;

	cout<<"\nTotal bank note\n";
	cout<<"Banknote 1000\t: "<<B1000<<endl;
	cout<<"Banknote 500 \t: "<<B500<<endl;
	cout<<"Banknote 100 \t: "<<B100<<endl;
	cout<<"Oter\t\t: "<<money<<endl;

	return 0;
}