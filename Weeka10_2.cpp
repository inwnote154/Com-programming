#include <iostream>
#include<iomanip>
using namespace std;
float average(float num[10]);
int main()
{ 
	int i;
	float score[10],avg_score;
	for(i=0;i<10;i++)
	{ 
		cout<<"Enter score "<<i+1<<" : ";
		cin>>score[i];
	}
	avg_score = average(score);
	cout<< "Average score is "<<fixed<<setprecision(2)<<avg_score<<endl;
	system("pause");
	return 0;
}
float average(float num[10])
{ 
	float avg=0;
	int i=0;
	for(i;i<10;i++)
	{
		avg+=num[i];
	}
	avg/=i;
	return avg;
}