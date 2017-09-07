#include <iostream>
using namespace std;

int main()
{
	int angle1,angle2,angle3;
	cout<<"enter the three angles of a triangle:";
	cin>>angle1>>angle2>>angle3;
	
	if(angle1+angle2+angle3==180)
	cout<<"tringle is valid:";
	else
	cout<<"tringle is not valid:";
	return 0;
}
