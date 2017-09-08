#include <iostream>
using namespace std;

int main() 
{
	int a,i;
	cout<<"enter number";
	cin>>a;
	while(a!=0)
	{
		a=a/10;
		++i;
	}
	cout<<"number of digits ="<<i;
	return 0;
}
