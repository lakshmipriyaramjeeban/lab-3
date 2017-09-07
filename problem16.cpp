#include <iostream>
using namespace std;
 
int main() 
{
	int a,b,c;
	cout<<"enter the value of side a,b,c of a triangle:";
	cin>>a>>b>>c;
	if (a==b && b==c && c==a)
	{
		cout<<"the triangle is equilateral:";
	}
	else if(a==b || b==c|| c==a)
	{
		cout<<"the triangle is isosceles:";
	}
	else if(a*a==b*b+c*c ||b*b==c*c+a*a || c*c==a*a+b*b)
	{
		cout<<"the triangle is right angled:";
	}
	else
	cout<<"the triangle is scalene angled:";
 
	return 0;
}
