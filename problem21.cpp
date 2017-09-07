#include <iostream>
using namespace std;

int main() 
{
	float a,b;
	cout<<"enter electric units used:";
	cin>>a;
	if(a>=150 & a<=150)
	b=(50*0.5)+(0.75*(a-50));
	else if(a>150 & a<=250)
	b=100+(1.20*(a-150));
	else
	b=220+(1.5*(a-250));
	cout<<"total electricity bill="<<b;
	return 0;
}
