#include <iostream>
using namespace std;

int main ()
{
	static int n[2]={20,18};
	int max=0,min=n[0],es=0;
	for (int i=0;i<2;i++)
	{
		max=(max<n[i])?n[i]:max;
		min=(min>n[i])?n[i]:min;
	}
	cout<<"1- "<<min<<endl;
	cout<<"2- "<<max<<endl;
}
