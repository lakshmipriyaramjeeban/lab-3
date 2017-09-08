#include<iostream>
using namespace std;

int main()
{
	int a,b,r;
	cout<<"enter number";
	cin>>a;
	while(b!=0)
	{
		r=(r*10)+(b%10);
		b/=10;
	}
	if(r==a)
	cout<<"the number is palindrome";
	else
	cout<<"the number is not palindrome";
	return 0;
}
