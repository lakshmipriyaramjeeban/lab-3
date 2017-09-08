#include <iostream>
using namespace std;

int main() 
{
	int a,i,j;
	cout<<"enter number";
	cin>>a;
	j=a;
	while(j>10)
	{
		j=j/10;
	}
	cout<<"sum of first & last digit="<<j+(a%10);
	
	return 0;
}
