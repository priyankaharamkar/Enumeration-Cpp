#include<iostream>
using namespace std;
enum suit{
    club=0,
    diamonds=30,
    hearts=44,
    spades=5
}sd;
int main()
{
//	int sd=hearts | spades; //for additon of integer values 
	sd=hearts;
	cout<<"hearts : "<<sd<<endl;
	cout<<"hearts : "<<sizeof(sd);
}
