#include <iostream>
using namespace std;

int main ()
{
	int *a,max=0;
	a=new int [2];
	cout<<"Logico: ";
	cin>>a[0];
	cout<<"Karel: ";
	cin>>a[1];
	cout<<"C++: ";
	cin>>a[2];
	for (int i=0;i<3;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<"La mayor es: "<<max<<endl;
	delete []a;
}
