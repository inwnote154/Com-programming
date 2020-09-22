#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length,const float Widht);
double Area(const double Based,const double High);
int main()
{
	char Choice;
	bool Flag=true;
	do{
		DisplayMenu();
		cin>>Choice;
		if(Choice=='1')
		{
			float Radius;
			cout<<"\nEnter radius : ";
			cin>>Radius;
			cout<<"Area of Circle = "<<fixed;
			cout<<setprecision(2)<<Area(Radius)<<endl;
		}
		if(Choice=='2')
		{
			float Length,Widht;
			cout<<"\nEnter length and widht : ";
			cin>>Length>>Widht;
			cout<<"Area of Rectangle = "<<fixed;
			cout<<setprecision(2)<<Area(Length,Widht)<<endl;
		}
		if(Choice=='3')
		{
			float Based,High;
			cout<<"\nEnter based and high : ";
			cin>>Based>>High;
			cout<<"Area of Triangle = "<<fixed;
			cout<<setprecision(2)<<Area(Based,High)<<endl;
		}
		if(Choice=='4')
		{
			Flag=false;
		}
		else
		{
			cout<<"\nYou choose out of range is ";
			cout<<"not process.\n";
		}
	}while(Flag);

	cout<<"\n. . . Exit Program . . .\n";

	system("pause");
	return 0;
}
void DisplayMenu()
{
	cout<<endl;
	cout<<" Program Calculate Area "<<endl;
	cout<<"  1. Clrcle "<<endl;
	cout<<"  2. Rectangle "<<endl;
	cout<<"  3. Triangle "<<endl;
	cout<<"  4. Exit "<<endl;
	cout<<"Enter your choose number : ";
}
float Area(const float Radius)
{
	return(3.14159F*Radius*Radius);
}
float Area(const float Length,const float Widht)
{
	return(Length*Widht);
}
double Area(const double Based,const double High)
{
	return(1/2*Based*High);
}
