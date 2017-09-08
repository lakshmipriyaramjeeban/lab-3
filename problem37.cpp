#include<iostream>
using namespace std;

int main()
{
	int a,r;
	cout<<"enter number";
	cin>>a;
	while(a!=0)
	{
		r=(r*10)+(a%10);
		a/=10;
	}	
	cout<<"reverse="<<r;
	return 0;
}
