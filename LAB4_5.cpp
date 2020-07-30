#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	cout << "x = " << x << endl;
	x += 1;
	cout << " x += 1; \tX 10 + 1 = " << x << endl;
	x -= 1;
	cout << " x += 1; \tX 10 - 1 = " << x << endl;
	x *= 3;
	cout << " x *= 3; \tX 10 * 3 = " << x << endl;
	x /= 3;
	cout << " x /= 3; \tX 10 / 3 = " << x << endl;
	x %= 3;
	cout << " x %= 3; \tX 10 % 3 = " << x << endl;
	return(0);
}