#include <iostream>
using namespace std;

int main ()
{
	int *n,t,max=0,maxp=0;
	cout<<"Dame tamaño del arreglo: ";
	cin>>t;
	n=new int [t];
	for (int i=0;i<t;i++)
	{
		cout<<"Dame numero: ";
		cin>>n[i];
		max=(n[i]>max)?n[i]:max;
		maxp=(n[i]==max)?i:maxp;
		/*cout<<"max: "<<max<<endl;
		cout<<"maxp: "<<maxp<<endl;*/
	}
	cout<<"El resultado es: "<<endl;
	for (int i=0;i<t;i++)
	{
		int c;
		if (i!=maxp)
		{
			c+=1;
			cout<<c<<"- "<<n[i]<<endl;
		}
	}
	cout<<t<<"- "<<max<<endl;
}
