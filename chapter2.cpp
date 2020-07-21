// Program chapter 2
#include<iostream>
#include<string>
using namespace std;
void main()
{
	/*cout << "\"I will \tget\t\\\'A\'\\ \t\tin\"\n";
	cout << "A = \101 = \x41\n";
	cout << "\x4E\x4F\x54\x45 \n";
	cout << "\116\117\124\105 \n";*/
	
	/*unsigned short age;
	cout<<sizeof(age)<<endl;
	cout<<0x23<<endl;*/

	/*cout<<230.E+3<<endl;
	cout<<2.3e5<<endl;
	cout<<.23E6<<endl;*/

	string name;
	short age;
	float math_score,com_score,avg;
	//input
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Age  : ";
	cin>>age;
	cout<<"Enter Math Score : ";
	cin>>math_score;
	cout<<"Enter Com Score  : ";
	cin>>com_score;

	//output
	cout<<"------------------------------------------\n";
	cout<<"Name = "<<name<<endl;
	cout<<"Age  = "<<age<<endl;
	cout<<"Math Score = "<<math_score<<endl;
	cout<<"Com Score  = "<<com_score<<endl;
	cout<<"------------------------------------------\n";
	//ไม่นำมาใช้ต่อ
	cout<<"Average Score = "<<(math_score+com_score)/2<<endl;
	/*//นำมาใช้ต่อ
	avg = (math_score+com_score)/2; //ต้องประกาศตัวแปร avg ก่อน
	cout<<"Average Score = "<<avg<<endl;*/

}