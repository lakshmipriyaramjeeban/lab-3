#include <iostream>
using namespace std;

int main() 
{
	int cp,sp,result;
	cout<<"enter cost price of item:";
	cin>>cp;
	cout<<"enter selling price of item:";
	cin>>sp;
	result=sp-cp;
	if(result>0)
	cout<<"profit:"<<result;
	else if(result<0)
	cout<<"loss:"<<result;
	else
	cout<<"no profit no loss:";
	return 0;
}
