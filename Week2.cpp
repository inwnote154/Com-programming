#include<iostream>;
#include<string>;
using namespace std;
void age(short);
int main()
{
	string name;
	short year;
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter year of Birth : ";
	cin>>year;
	age(year);
	system("pause");
	return 0;
}
void age(short year)
{
	short age=2563-year;
	cout<<"Your age = "<<age<<" years old"<<endl;
}