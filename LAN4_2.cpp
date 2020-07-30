#include<iostream>
using namespace std;
int main ()
{
	float x;
	cout << "Enter value X : ";
	cin  >> x; 
	float result (0);
	result = x * x * x + 3 * x - 10; 
	cout << "\n Result of x*x*x + 3*x - 10 = ";
	cout << result << endl;
	return(0);
}