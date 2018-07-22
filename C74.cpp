#include <iostream>
using namespace std;

int main ()
{
	static int ar[10]={15,21,6,8,33,54,23,3,22,16};
	int *p,n=0;
	for (int i=0;i<10;i++)
	{
		if ((ar[i]%2)==0)
		{
			n+=1;
		}
	}
	p=new  int [n];
	int cont=0;
	for (int i=0;i<10;i++)
	{
		if (ar[i]%2==0)
		{
			cont+=1;
			p[cont-1]=ar[i];
			cout<<"Numero par encontrado: "<<p[cont-1]<<endl;
		}
	}
	delete []p;
}
