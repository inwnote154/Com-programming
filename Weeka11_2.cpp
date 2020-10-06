#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
float calprice(float price[3][5]);
void display(string name[5],float price[3][5]);
int main()
{
	string name[5];
	float price[3][5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Product Name : ";
		cin>>name[i];
		cout<<"\tprice : ";
		cin>>price[0][i];
	}
	calprice(price);
	display(name,price);
	system("pause");
	return 0;
}
float calprice(float price[3][5])
{
	for(int i=0;i<5;i++)
	{
		price[1][i]=price[0][i]*0.07;
		price[2][i]=price[0][i]+price[1][i];
	
	}
	return(price[3][5]); // มีก็ได้ไม่มีก็ได้
}
void display(string name[5],float price[3][5])
{
	cout<<setw(65)<<setfill('-')<<" \n";
	cout<<setfill(' ')<<"No.\tproduct"<<setw(15)<<right<<"price"
		<<setw(15)<<right<<"vat7%"<<setw(15)<<right<<"Net"<<endl;
	cout<<setw(65)<<setfill('-')<<" \n"<<setfill(' ');
	for(int i=0;i<5;i++)
	{
		cout<<i+1<<"\t";
		cout<<name[i]<<setw(22-name[i].size())<<right;
		for(int j=0;j<3;j++)
		{
			cout<<fixed<<setprecision(2)<<price[j][i];
			if(j<2)cout<<setw(15)<<right;
		}
		cout<<endl;
	}
	cout<<setw(65)<<setfill('-')<<" \n"<<setfill(' ');
}