#include <iostream>
using namespace std;

int main() 
{
	int a,j,i;
	cout<<"enter two numbers";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		j++;
	}
	if(j==2)
	cout<<"PRIME NUMBER";
	else
	cout<<"NOT A PRIME NUMBER";

	return 0;
}
