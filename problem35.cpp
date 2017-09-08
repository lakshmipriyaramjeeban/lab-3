#include <iostream>
using namespace std;

int main() 
{
	int a,b,s;
	cout<<"enter number";
	cin>>a;
	b=a;
	while(b!=0)
	{
		s=s+(b%10);
		b=b/10;
	}
	cout<<"sum of digits="<<s;
	
	return 0;
}
