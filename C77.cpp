#include <iostream>
using namespace std;

int main ()
{
	static int a[10]={15,21,6,8,33,54,23,3,22,16};
	int n=10;
	cout<<"Arreglo preorden: "<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<endl;
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1-i;j++)
		{
			if (a[j]>a[j+1])
			{
				a[j]=a[j]+a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]=a[j]-a[j+1];
			}
		}
	}
	cout<<"Arreglo postorden: "<<endl;
	for (int i=0;i<10;i++)
	{
		cout<<a[i]<<",";
	}
}

