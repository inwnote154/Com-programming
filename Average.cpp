#include<iostream>
using namespace std;
void sum1(int);
void avg1(int);
int main()
{
	int num;
	cout<<"Enter number ";
	cin>>num;
	sum1(num);
	avg1(num);
	return 0;
}
void sum1(int num)
{
	int sum=0;
	for(int i=1;i<=num;i++)
	{
		sum+=i;
	}
	cout<<"Sum = "<<sum<<endl;
}
void avg1(int num)
{
	float avg=0;
	for (int i=1;i<=num;i++)
	{
		avg+=i;
	}
	avg/=num;
	cout<<"Average = "<<avg<<endl;
}