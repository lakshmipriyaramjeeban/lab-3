#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"enter side a of tringle :";
	cin>>a;
	cout<<"enter side b of tringle:";
	cin>>b;
	cout<<"enter side c of tringle:";
	cin>>c;
	if(a+b>c)
	cout<<"the tringle is valid:";
	else if(a+c>b)
	cout<<"triangle is valid:";
	else
	cout<<"triangle is invalid:";

	return 0;
}
