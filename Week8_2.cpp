#include<iostream>
#include<iomanip>
#include<string>
void split_string(int);
using namespace std;
int main()
{
	/*float r=3.14*2.5*2.5;
	float a=12.56/2*1.6;
	cout<<fixed<<setprecision(4)<<r<<setw(20)<<setfill('-')<<fixed<<setprecision(2)<<a<<endl;*/

	//---------------------------------------------------------------------------------------------------------
	
	/*string name;
	int age;
	float salary,com;
	cout<<"Input name : ";
	cin>>name;
	cout<<"Input age : ";
	cin>>age;
	cout<<"Input salary : ";
	cin>>salary;
	cout<<"Input comission : ";
	cin>>com;
	cout<<setw(45)<<setfill('-')<<'-'<<endl;
	cout<<setfill(' ')<<setw(10)<<left<<"name"<<setw(10)<<left<<"age"<<setw(10)<<left<<"salary"<<setw(0)<<left<<"comission"<<endl;
	cout<<setw(45)<<setfill('-')<<'-'<<endl;
	cout<<setfill(' ')<<setw(10)<<left<<name<<setw(10)<<left<<age<<setw(6)<<right<<fixed<<setprecision(2)<<salary<<setw(13)<<right<<fixed<<setprecision(3)<<com<<endl;*/

	//---------------------------------------------------------------------------------------------------------

	/*string s1="Lisa";
	string s2="Black pink";
	cout<<s1.length()<<endl;//4
	cout<<s1.size()<<endl;//4
	cout<<s2.c_str()<<endl;//Black pink
	cout<<s2.at(4)<<endl;//k
	cout<<s2.append(" so cute")<<endl;//Black pink so cute
	cout<<s2.substr(6,4)<<endl;//pink
	cout<<s2.erase(6,4)<<endl;
	cout<<s2<<endl;//Black so cute
	if(s2.empty())
	{
		cout<<"String is empty."<<endl;
	}
	else
	{
		cout<<s2.c_str()<<endl;
	}*/
	//---------------------------------------------------------------------------------------------------------

	/*string str="";
	cout<<"Enter number (string) : ";
	cin>>str;
	for(int i=0;i<=str.size()-1;i++)
	{
		cout<<str.at(i);
		if(str.at(i)=='0')
			cout<<" : zero\n";
		else if(str.at(i)=='1')
			cout<<" : one\n";
		else if(str.at(i)=='2')
			cout<<" : two\n";
		else if(str.at(i)=='3')
			cout<<" : three\n";
		else if(str.at(i)=='4')
			cout<<" : four\n";
		else if(str.at(i)=='5')
			cout<<" : five\n";
		else if(str.at(i)=='6')
			cout<<" : six\n";
		else if(str.at(i)=='7')
			cout<<" : seven\n";
		else if(str.at(i)=='8')
			cout<<" : eight\n";
		else
			cout<<" : nine\n";
	}*/

	//---------------------------------------------------------------------------------------------------------

	/*int num;
	cout<<"Enter String : ";
	cin>>num;
	split_string(num);*/

	//---------------------------------------------------------------------------------------------------------

	

	//---------------------------------------------------------------------------------------------------------

	system("pause");
	return 0;
}
/*void split_string(int num)
{
	num=to_string(static_cast<long long>(num));
	for(int i=0;i<=num.size()-1;i++)
		cout<<num<<endl;
}*/