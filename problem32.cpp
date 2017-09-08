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
	cout<<"first digit="<<j<<"\n last digit ="<<a%10;
	
	return 0;
}
