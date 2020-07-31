#include<iostream>
using namespace std;
void add(int,int); // ประกาศฟังก์ชัน
void sub(int,int);
void mul(int,int);
void dev(int,int);

int main()
{
	int x , y ; // local variable
	cout << "Enter X : " ;
	cin >> x ;
	cout << "Enter Y : " ;
	cin >> y ;
	add(x,y); // เรียกใช้ฟังก์ชัน
	sub(x,y);
	mul(x,y);
	dev(x,y);
	system("pause");
	return 0 ;
}
void add(int a,int b) // การสร้างฟังก์ชัน
{	
	cout << a << "+" << b << "=" << a+b << endl ;
}
void sub(int a,int b)
{
	cout<<a<<"-"<<b<<"="<<a-b<<endl;
}
void mul(int a,int b)
{
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
void dev(int a,int b)
{
	cout<<a<<"/"<<b<<"="<<a/b<<endl;
}