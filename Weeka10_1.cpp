#include<iostream>
#include<string>
#include<array>
using namespace std;
void print_arr(int a[4]);
int main()
{
	//arrayex1.c
	/*int ages[10];
	char name[50];
	double scores[20];
	cout<<"Size of ages = "<<sizeof(ages)<<endl;
	cout<<"Size of name = "<<sizeof(name) <<endl;
	cout<<"Size of scores = "<<sizeof(scores) <<endl;
	cout<<"Size of name[0]= "<<sizeof(name[0]) <<endl;
	cout<<"Size of ages[0]= "<<sizeof(ages[0]) <<endl;*/

	//---------------------------------------------------------------------

	/*int num;
	cout<<"Enter number of student : ";
	cin>>num;
	int *a=new int[num];
	string *name=new string[num];
	// int a[5];
	// string name[5];
	for(int x=0;x<num;x++)
	{
		cout<<"Enter name ["<<x+1<<"] : ";
		cin>>name[x];
		cout<<"Enter score ["<<x+1<<"] : ";
		cin>>a[x];
	}
	cout<<"\nno.\tname\tscore"<<endl;
	cout<<"---------------------\n";
	for(int x=0;x<num;x++)
	{
		cout<<x+1<<"\t"<<name[x]<<"\t"<<a[x]<<endl;
	}*/

	//---------------------------------------------------------------------
	
	/*int a[4] = {-1,6,9,2};
	int max = a[0];
	int min = a[0];
	for(int i=1;i<4;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
		if(a[i] < min)
		{
			min  = a[i];
		}
	}
	cout<<"Maximum value is "<<max<<endl;
	cout<<"Minimum value is "<<min<<endl;
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);// #include<array>
	int sum=0;
	cout<<"Sorted Array : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		sum+=a[i];
	}
	cout<<"\nSum of all elements = "<<sum;
	cout<<endl;*/

	//---------------------------------------------------------------------
	
	int num[4] = {5,2,-1,8};
	print_arr(num);
	for(int i =0;i<4;i++)
	{	
		cout<<num[i]<<endl;
	}

	//------------------------------------------------------------------

	system("pause");
	return 0;
}
void print_arr(int a[4])
{
	for(int i =0;i<4;i++)
	{	
		a[i]*=2;
		cout<<a[i]<<endl;
	}
}
