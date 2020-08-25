#include<iostream>
#include<string>
using namespace std;
int main()
{
	//----------------------------------------------------------------------------------------------------------------------------------------------------

	/*char ch;
	int i=0,l=0,u=0,n=0,s=0;
	
	cout<<"Input string : ";
	
	while(cin>>ch)
	{
		i++;
		
		cout<<ch<<endl;
		
		if(ch>='a'&&ch<='z') l++;
		
		else if(ch>='A'&&ch<='Z') u++;
		
		else if(ch>='0'&&ch<='9') n++;
		
		else s++;
		
		if(i==5)break;
		
		if(ch=='.')break;
	}
	
	cout<<"Your message have "<<l<<"lower character."<<endl;
	cout<<"Your message have "<<u<<"upper character."<<endl;
	cout<<"Your message have "<<n<<"numeric character."<<endl;
	cout<<"Your message have "<<s<<"special character."<<endl;*/

	//----------------------------------------------------------------------------------------------------------------------------------------------------
	
	/*char menu;
	string username1,password1,username2,password2;
	
	cout<<"Please Enter Menu\n-----------------\n";
	cout<<"1. Register\n2. Login\nQ. Exit\n";
	cout<<"Select : ";
	cin>>menu;
	
	do{
		if(menu=='1') 
		{
			cout<<"Register\n";
			cout<<"Enter Username : ";
			cin>>username1;
			cout<<"Enter Password : ";
			cin>>password1;
		}
		
		else if(menu=='2') 
		{	
			cout<<"Login\n";
			cout<<"Enter Username : ";
			cin>>username2;
			cout<<"Enter Password : ";
			cin>>password2;
			if(username1==username2&&password1==password2) cout<<"Username and Password Correct\n";
			else cout<<"Username and Password Incorrect\n";
		}
		
		else cout<<"Wrong Menu\n";
		
		cout<<"Select : ";cin>>menu;
	}while(menu!='Q'&&menu!='q');*/

	//----------------------------------------------------------------------------------------------------------------------------------------------------

	/*int num,i=1;
	
	cout<<"Please input number line : ";
	cin>>num;

	while(i<=num)
	{
		if(num%2==1)
		{
			for(int j=1;j<=i;j++) cout<<"*";
		}
		
		else
		{
			for(int j=1;j<=i;j++) cout<<"@";
		}
		
		cout<<endl;
		i++;
	}*/

	//----------------------------------------------------------------------------------------------------------------------------------------------------

	double score=0;
	int n=0;
	char grade;

	do
	{
		cout<<"Enter the letter grade (Enter 'X' to exit)\n";
		cin>>grade;
		if(grade=='a'||grade=='A') score+=4,n++;
		else if(grade=='b'||grade=='B') score+=3,n++;
		else if(grade=='c'||grade=='C') score+=2,n++;
		else if(grade=='d'||grade=='D') score+=1,n++;
		else if(grade=='f'||grade=='F') score+=0,n++;
		else if(grade=='x'||grade=='X') break;
		else cout<<"invalid. Try again.\n";
	}while(grade!='x'&&grade!='X');

	cout<<"Total Grade Points : "<<score<<endl;
	cout<<"GPA : "<<score/(double)(n)<<endl;

	//----------------------------------------------------------------------------------------------------------------------------------------------------
	return 0;
}