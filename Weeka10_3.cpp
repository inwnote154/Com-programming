#include<iostream>
#include<iomanip>
using namespace std;
void display(int salary[],int num);
int cal_bonus(int);
int main()
{
	int num;
	cout<<"Enter Number of person : ";
	cin>>num;
	cout<<endl;
	int *salary=new int[num];
	for(int x=0;x<num;x++)
	{
		cout<<"Enter the salary "<<x+1<<" : ";
		cin>>salary[x];
		cout<<endl;
	}
	display(salary,num);

	system("pause");
	return 0;
}
void display(int salary[],int num)
{
	cout<<setw(70)<<setfill('-')<<" "<<endl;
	cout<<"There are "<<num<<" persons.\n";
	for(int i=0;i<num;i++)
	{
		cout<<"The Salary for person "<<i+1<<" = "<<salary[i];
		cout<<" and Bonus = "<<cal_bonus(salary[i])<<endl;
	}
	cout<<setw(70)<<setfill('-')<<" "<<endl;
}
int cal_bonus(int salary)
{
	int bonus=salary*2;
	return bonus;
}