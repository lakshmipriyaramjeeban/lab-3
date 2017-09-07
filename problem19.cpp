#include <iostream>
using namespace std;

int main() 
{
	float a,b,c,d,e,f,g,perc;
	cout<<"enter marks of 5 subjects:";
	cin>>a>>b>>c>>d>>e;
	cout<<"enter maximum marks of a subject:";
	cin>>f;
	perc=((a+b+c+d+e)/500)*100;
	if (perc>=90)
	cout<<"grade A";
	else if (perc>=80 & perc<=90)
	cout<<"grade B";
	else if (perc>=70 & perc<=80)
	cout<<"grade C";
	else if (perc>=60 & perc<=70)
	cout<<"grade D";
	else if (perc>=40 & perc<=60)
	cout<<"grade E";
	else
	cout<<"grade F";
	return 0;
}
