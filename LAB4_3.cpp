#include<iostream>
using namespace std;
int main()
{
	int A , B;
	cout << "Enter number (A) = ";
	cin  >> A;
	cout << "Enter number (B) = ";
	cin  >> B;
	cout << "\nTesting usage operator\n";
	cout << "=======================\n";
	cout << " A < B = "	<< (A < B) << endl ;
	cout << " A <= B = " << (A <= B) << endl ;
	cout << " A > B = " << (A > B) << endl ;
	cout << " A >= B = " << (A >= B) << endl ;
	cout << " A == B = " << (A == B) << endl ;
	cout << " A != B = " << (A != B) << endl ;
	cout << " A && B = " << ( A && B) << endl ;
	cout << " A || B = " << ( A || B) << endl ;
	cout << "!A = " << !A << ", !B = " << !B << endl;
	return (0);
}