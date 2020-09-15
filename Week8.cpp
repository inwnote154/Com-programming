#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	//----------------------------------------------------------------------------------------------------------------------

	//ctype.h or cctype

	/*char ch;
	cout<<"Enter character : ";
	cin>>ch;
	if(isalpha(ch))
	{	
		cout<<"This is alphabet."<<endl;
		cout<<(char)toupper(ch)<<endl;
	}
	else
	{
		cout<<"This is numeric."<<endl;
	}

	/*if(!isdigit(ch))
		cout<<"This is alphabet."<<endl;
	else
		cout<<"This is numeric."<<endl;*/

	//----------------------------------------------------------------------------------------------------------------------

	//Stdlib Library(stdlib.h or cstdlib)

	/*char ch[10] = "-44897.63";
	cout<<abs(atoi(ch))+100<<endl;*/
	
	/*srand(time(NULL));//ต้อง  include time.h
	int num,n2,n3,n4,n5;
	cout<<10000+rand()%89999<<endl;
	cout<<"Random number is "<<num<<endl;
	n2=num%10000;
	n3=n2%1000;
	n4=n3%100;
	n5=n4%10;
	cout<<num/10000<<"-"<<n2/1000<<"-"<<n3/100<<"-"<<n4/10<<"-"<<n5<<endl;*/

	//----------------------------------------------------------------------------------------------------------------------
	
	/*char str1[20]="Hello";
	char str2[20]=" World";
	cout<<str1<<""<<str2<<endl;
	cout<<str1<<endl; //Hello
	cout<<strcat(str1,str2)<<endl;
	cout<<str1<<endl; //Hello World
	cout<<strchr(str1,'l')<<endl; //llo World
	cout<<str1<<endl;
	cout<<strcmp(str1,str2)<<endl; //1
	cout<<strcpy(str1,"Hello Na")<<endl; //Hello Na
	cout<<strlen(str1)<<endl; //8*/

	//----------------------------------------------------------------------------------------------------------------------
	
	/*char ch[20];
	cout<<"Enter String : ";
	cin>>ch;
	for(int i=strlen(ch)-1;i>=0;i--)
	{
		cout<<(char)toupper(ch[i]);
		if(isalpha(ch[i]))
		{
			cout<<" Here is character"<<endl;
		}
		else
		{
			cout<<" Here is numeric"<<endl;
		}
	}*/

	//----------------------------------------------------------------------------------------------------------------------

	return 0;
}