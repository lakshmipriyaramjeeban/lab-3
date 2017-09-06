#include <iostream>
using namespace std;

int main() 
{
	int a,b,c;
	cout<<"enter three no:";
	cin>>a>>b>>c;
	if (a>b && a>c)
	{
		cout<<"a is the laeger no:";
	}
	else if (b>a && b>c)
	{
		cout<<"b is the larger no:";
	}
	else
	{
		cout<<"c is the larger no:";
	}
	return 0;
}
