#include<iostream>
#include<string>
using namespace std;
//int swap(int,int) pass by value
int swap(int &a,int &b); // pass by reference
void Sort3(int &V1,int &V2,int &V3);
void ParseName(string &First,string &Last,const string FullName,string ch);
 
int main()
{
	 /*int x=5,y=3;
	 swap(x,y);
	 cout<<"x = "<<x<<endl;
	 cout<<"y = "<<y<<endl;*/

	//-----------------------------------------------------------------------------------

	/*int Value1,Value2,Value3;
	cout<<"Enter three integer number : ";
	cin>>Value1>>Value2>>Value3;
	int Output1,Output2,Output3;
	Output1=Value1;
	Output2=Value2;
	Output3=Value3;
	Sort3(Output1,Output2,Output3);
	cout<<Value1<<" "<<Value2<<" "<<Value3;
	cout<<" insorted order is ";
	cout<<Output1<<" "<<Output2<<" "<<Output3<<endl;*/

	//-----------------------------------------------------------------------------------

	string Name,LastName,FirstName,ch;
	cout<<"Enter string :: ";
	cin>>Name;
	cout<<"Enter Substring :: ";
	cin>>ch;

	ParseName(FirstName,LastName,Name,ch);
	cout<<"String 1 : "<<FirstName<<endl;
	cout<<"String 2 : "<<LastName<<endl;

	//-----------------------------------------------------------------------------------

	system("pause");
	return 0;
}
//int swap(int a,int b) pass by value
int swap(int &a,int &b) // pass by reference
{
	a=6;
	b=5;
	return a+b;
}
void Sort3(int &V1,int &V2,int &V3)
{
	int tmp;
	if(V1>V2)
	{
		tmp=V1;
		V1=V2;
		V2=tmp;
	}
	if(V1>V3)
	{
		tmp=V1;
		V1=V3;
		V3=tmp;
	}
	if(V2>V3)
	{
		tmp=V2;
		V2=V3;
		V3=tmp;
	}
}
void ParseName(string &First,string &Last,const string FullName,string ch)
{
	int I=FullName.find(ch);
	if(I==-1)
	{
		cout<<"This string is net found.\n";
	}
	else
	{
		cout<<"The ["<<ch<<"] found at ["<<I<<"]\n";
		First=FullName.substr(0,I);
		Last=FullName.substr(I,FullName.size());
	}
}