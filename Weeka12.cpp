#include<iostream>
#include<fstream>
#include<string>
#include<time.h>
using namespace std;
int main()
{
	ofstream outfile;
	//int value;
	string name;
	int mscore,fscore,total;
	string filename="myfile2.txt";
	outfile.open(filename.c_str(),ios_base::out|ios_base::app);
	srand(time(NULL));
	if(outfile.is_open())
	{
		cout<<"DD.\n";
		for(int i=0;i<=3;i++)
		{
			//value=rand()%100;
			//cout<<value<<endl;
			//outfile<<value<<" ";
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter mid-score : ";
			cin>>mscore;
			cout<<"Enter final-score : ";
			cin>>fscore;
			outfile<<name<<" "<<mscore<<" "<<fscore;

		}
	}
	else
	{
		cout<<"EE.\n";
	}
	outfile.close();
	ifstream infile;
	infile.open(filename.c_str());
	if(infile.is_open())
	{
		cout<<"DD.\n";
		while(infile>>name>>mscore>>fscore)
		{
			total=mscore+fscore
			cout<<name<<" "<<mscore<<" "<<fscore<<" "<<total<<endl;
		}
	}
	else
	{
		cout<<"EE.\n";
	}

	system("pause"); 
	return 0;
}
