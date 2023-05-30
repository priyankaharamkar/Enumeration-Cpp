#include<iostream>
using namespace std;
enum season{spring=44,summer=6,autumn=55,winter=33};
int main()
{
	season s;
	s=summer;
	cout<<"summer : "<<s; //enum takes only one value out of many possible 
	                      // value.
}
