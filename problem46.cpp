#include <iostream>
using namespace std;

int main() 
{
	int a,b,max,j,i;
	cout<<"enter two number";
	cin>>a>>b;
	max=(a>b)?a:b;
	for(i=1; i<=max;i++)
	{
		if(a%i==0 & b%i==0)
		j=i;
	}
	cout<<"HCF="<<j;

	return 0;
}
