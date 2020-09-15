#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int num=1+rand()%19;
	int n1,i=1;
	do{
		cout<<"Enter luckynumber "<<i<<" (1-20) : ";
		cin>>n1;
		if(n1!=num)
		{
			cout<<"This is wrong number."<<endl;
		}

		else
		{
			cout<<"Lucky!!!!!!\nYou got 1,000,000 bath"<<endl;
		}
		i++;
	}while(n1!=num);
	return 0;
}