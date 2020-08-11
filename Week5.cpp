#include<iostream>
#include<string>
using namespace std;
//int mul(int,int,int);
//void show_sum(int);
char check_score(int);
void show_grade(char);
int main()
{
	//LAB5_6
	/*for(int i=1;i<=5;i++)
	{
		cout<<i;
	}
	cout<<endl;*/
	
	//----------------------------------------------------------------------------------------------------------------------------------------------------

	/*int n,nstop;
	
	cout<<"Enter start number : ";
	cin>>n;
	
	cout<<"Enter stop number : ";
	cin>>nstop;
	
	for(int i=1;;)
	{
		if(n<nstop) 
		{
			cout<<"The stop number is less than start number."<<endl;
			
			cout<<"Enter stop number : ";
			cin>>nstop;
		}
		else break;
	}
	
	for(n ; n >= nstop ; n=n-2)
	{
		cout << n << endl ;
	}*/
	
	//----------------------------------------------------------------------------------------------------------------------------------------------------
	
	/*int num,numstop,sum=0;
	
	cout<<"Enter start number : ";
	cin>>num;
	
	cout<<"Enter stop number : ";
	cin>>numstop;
	
	for(int n=num;n>=numstop;n=n-2)
	{
		cout<<n;
		cout<<endl;
		
		sum=sum+n;
		//cout<<"sum = "<<sum<<endl; // แสดงค่า sum ทุกรอบ
	}
	cout<<"sum = "<<sum<<endl; // แสดงค่า sum รอบเดียว*/

	//----------------------------------------------------------------------------------------------------------------------------------------------------

	/*int num1,num2,sum=0;
	
	cout<<"Input first number  : ";
	cin>>num1;
	
	cout<<"Input second number : ";
	cin>>num2;
	
	sum=mul(num1,num2,sum);
	show_sum(sum);*/

	//----------------------------------------------------------------------------------------------------------------------------------------------------
	
	int numStudent;
	
	cout<<"Enter Number of Student : ";
	cin>>numStudent;
	
	for(int i=1;i<=numStudent;i++)
	{
		string name;
		int score;
		
		cout<<"Enter name "<<i<<" : ";
		cin>>name;
		
		cout<<"Enter score "<<i<<" : ";
		cin>>score;
		
		cout<<name<<" got : ";
		
		char grade=check_score(score);
		show_grade(grade);
		
		cout<<"-----------------------------------------------------"<<endl;
	}
	cout<<"........End........"<<endl;
	
	//----------------------------------------------------------------------------------------------------------------------------------------------------
	
	return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------

/*int mul(int num1,int num2,int sum) // ชนิด function ต้องตรงกับค่าที่ส่งกลับ
{
		for(int i=1;i<=num2;i++)
	{
		sum=sum+(num1*i);
		cout<<num1<<" * "<<i<<" = "<<num1*i<<endl;
	}
	return(sum); // ส่งค่า	sum คืนกลับ
}*/

/*void show_sum(int sum)
{
	cout<<"sum   = "<<sum<<endl;
}*/

//--------------------------------------------------------------------------------------------------------------------------------------------------------

char check_score(int score)
{
	char grade;
	
	if(score>=80&&score<=100) grade='A';
	else if(score>=70&&score<80) grade='B';
	else if(score>=60&&score<70) grade='C';
	else if(score>=50&&score<60) grade='D';
	else grade='F';
	
	return(grade);
}

void show_grade(char grade)
{
	cout<<grade<<endl;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------
