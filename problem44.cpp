#include <iostream>
using namespace std;

int main() 
{
	int a,j,i;
	j=1;
	cout<<"enter number:";
	cin>>a;
	for ( i=1 ; i<=a ; i++ )
	{
		j=j*i;
	}
	cout <<j;
	return 0;
}
