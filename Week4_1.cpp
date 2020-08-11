#include<iostream>
#include<string>
#include<math.h>
using namespace std;
//เรื่อง if
/*int main()
{
	int A,B;
	cout<<"Enter value A and B : ";
	cin>> A >> B ;
	if(A==B) 
	{
		cout<<"A is equal to B"<<endl;
		cout<<A<<endl;
		cout<<B<<endl;
	}
	return 0;
}*/

//เรื่อง if else
/*int main()
{
	int score;
	cout<<"Enter score : ";
	cin>>score;
	if(score >= 50) cout<<"Passed\n";
	else cout<<"Failed\n";
	return 0;
}

int main()
{
	float W,H,BMI;
	cout<<"Enter Weight : ";
	cin>>W;
	cout<<"Enter High   : ";
	cin>>H;
	BMI = W/pow(H/100,2);
	if (BMI>=26) cout<<"FAT";
	else cout<<"Slender\n";
	return 0;
}*/
//เรื่อง if else if
/*int main()
{
	char ch;
	cout<<"\nEnter a character : ";
	cin>>ch;
	if(ch>='a'&&ch<='z')
		cout<<ch<<" is lower character.";
	else if(ch>='A'&&ch<='Z')
		cout<<ch<<" is upper character.";
	else if(ch>='0'&&ch<='9')
		cout<<ch<<" is numeric.";
	else cout<<ch<<" is speacial character.";
	cout<<endl;
	return 0;
}

int main()
{
	float W,H,BMI;
	cout<<"Enter Weight : ";
	cin>>W;
	cout<<"Enter High   : ";
	cin>>H;
	BMI = W/pow(H/100,2);
	cout<<"BMI = "<<BMI<<endl;
	if(BMI<18.50)
		cout<<"Slender\n";
	else if(BMI>=18.50&&BMI<=22.90)
		cout<<"Nomal\n";
	else if(BMI>=23&&BMI<=24.90)
		cout<<"Dangerous 1\n";
	else if(BMI>=25&&BMI<=29.90)
		cout<<"Dangerous 2\n";
	else cout<<"Dangerous 3\n";
	return 0;
}*/
//เรื่อง swich
/*int main()
{
	cout<<"Please enter a simple expression (number operator number) : " ;
	int left,right;
	char Operator;
	cin>>left>>Operator>>right;
	int result;
	switch (Operator){
	case'+':result = left+right;
		break;
	case'-':result = left-right;
		break;
	case'*':result = left*right;
		break;
	case'/':result = left/right;
		break;
	default:cout<<Operator<<" is unrecognized opration.\n";
		return 1;
	}
	//	Display result
	cout<<left<<" "<<Operator<<" "<<right<<" equals "<<result<<endl;
	return 0;
}*/
int main()
{
	char grade;
	cout<<"Enter grade : ";
	cin>>grade;
	switch(grade)
	{
	case'A':cout<<"Excellent\n";
		break;
	case'B':cout<<"Good\n";
		break;
	case'C':cout<<"So so\n";
		break;
	case'D':cout<<"Fails\n";
		break;
	case'F':cout<<"Get lost\n";
		break;
	default :cout<<"Invalid data\n";
		return 1;
	}
	return 0;
}