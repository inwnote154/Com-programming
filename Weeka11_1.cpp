#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	/*int val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
	cout<<"Display all elements of array"<<endl;
	cout<<val[0][0]<<" "<<val[0][1]<<" "<<val[0][2]<<" "<<val[0][3]<<endl;
	cout<<val[1][0]<<" "<<val[1][1]<<" "<<val[1][2]<<" "<<val[1][3]<<endl;
	cout<<val[2][0]<<" "<<val[2][1]<<" "<<val[2][2]<<" "<<val[2][3]<<endl;
	for ( int i = 0; i < 3; ++i) 
	{
		cout<<endl;
		for (int j = 0; j < 4; ++j)
		{
			cout<<val[i][j]<<" ";
		}
	}
	cout<<endl;
	for ( int i = 0; i < 3; ++i)  
	{
		cout<<endl;
		for (int j = 0; j < 4; ++j)
		{
			val[i][j]*=2;
			cout<<val[i][j]<<" ";
		}
	}
	cout<<endl;*/

	//---------------------------------------------------------------------

	/*int a[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++) 
		{
			if(j==0) cout<<"Input subtest \t"<<i+1<<" : ";
			else if(j==1) cout<<"Input midterm \t"<<i+1<<" : ";
			else cout<<"Input final \t"<<i+1<<" : ";
			cin>>a[i][j];
		}
		cout<<setw(65)<<setfill('-')<<" "<<endl;
	}
	cout<<"No.\tSubtest\t\tMidterm\t\tFinal\t\tTotal"<<endl;
	cout<<setw(65)<<setfill('-')<<" "<<endl;
	for(int i=0;i<2;i++)
	{
		int sum=0;
		cout<<i+1<<"\t";
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t\t";
			sum+=a[i][j];
		}
		cout<<sum;
		cout<<endl;
	}*/

	//---------------------------------------------------------------------

	int A[5][5];
	int row,col;
	cout<<"Enter number of rows (Max 5) : ";
	cin>>row;
	cout<<"Enter number of columns (Max 5) : ";
	cin>>col;
	cout<<"Enter matrix A:\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>A[i][j];
		}
	}

	cout<<"Matrix 2A:\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			A[i][j]*=2;
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"Transpose Matrix 2A:\n";
	for(int j=0;j<col;j++)
	{
		for(int i=0;i<row;i++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}

	//---------------------------------------------------------------------

	system("pause");
	return 0;
}