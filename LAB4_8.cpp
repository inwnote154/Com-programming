#include<iostream>
using namespace std;
int main()
{
	int Number1,Number2,Number3;
	cout << "Eenter first number : ";
	cin  >> Number1;
	cout << "Eenter first number : ";
	cin  >> Number2;
	cout << "Eenter first number : ";
	cin  >> Number3;
	int Sum = Number1 + Number2 + Number3;
	float Average;
	Average = static_cast<float>(Sum) /3;
	cout << "\nAverage of 3 number = " << Average << endl;
	return(0);
}