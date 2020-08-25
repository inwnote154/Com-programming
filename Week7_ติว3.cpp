#include<iostream>
#include<math.h>
float square(float,float);
float triangle(float,float);
float circle(float);
using namespace std;
int main()
{
	char C;
	float w=0,h=0;
	cout<<"1.Calculate Area of Square\n";
	cout<<"2.Calculate Area of Triangle\n";
	cout<<"3.Calculate Area of Circle\n";
	cout<<"4.Exit\n";
	do{
		cout<<"--------------------------------------------\n";
		cout<<"Please Enter Menu \t: ";
		cin>>C;
		if(C=='1')
		{
			float squ;
			cout<<"Enter weight\t\t: ";
			cin>>w;
			cout<<"Enter Hight\t\t: ";
			cin>>h;
			squ=square(w,h);
			cout<<"The area of Square\t= "<<squ<<endl;
		}
		else if(C=='2')
		{
			float tri;
			cout<<"Enter based\t\t: ";
			cin>>w;
			cout<<"Enter Hight\t\t: ";
			cin>>h;
			tri=triangle(w,h);
			cout<<"The area of Triangle\t= "<<tri<<endl;
		}
		else if(C=='3') 
		{
			float cir;
			cout<<"Enter Radius\t\t: ";
			cin>>w;
			cir=circle(w);
			cout<<"The area of Circle\t= "<<cir<<endl;
		}
		else break;
	}while(C!='4');
	cout<<"Exit\n";
	system("pause");
	return 0;
}
float square(float w,float h)
{
	float squ;
	squ=w*h;
	return squ;
}
float triangle(float w,float h)
{
	float tri;
	tri=(0.5)*(w*h);
	return tri;
}
float circle(float w)
{
	float cri;
	cri=3.14*pow(w,2);
	return cri;
}