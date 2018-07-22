#include <iostream>
using namespace std;

int main ()
{
	static int ar[10]={15,21,6,8,33,54,23,3,22,16};
	int *par,*non,np=0,nn=0;
	for (int i=0;i<10;i++)
	{
		if ((ar[i]%2)==0)
		{
			np+=1;
		}
		else if (ar[i]%2>0)
		{
			nn+=1;
		}
	}
	par=new  int [np];
	non=new  int [nn];
	int contp=0,contn=0;
	for (int i=0;i<10;i++)
	{
		if (ar[i]%2==0)
		{
			contp+=1;
			par[contp-1]=ar[i];
		}
		else if (ar[i]%2>0)
		{
			contn+=1;
			non[contn-1]=ar[i];
		}
	}
	cout<<"Pares:"<<endl;
	for (int i=0;i<np;i++)
	{
		cout<<par[i]<<",";
	}
	cout<<endl;
	cout<<"Nones:"<<endl;
	for (int i=0;i<nn;i++)
	{
		cout<<non[i]<<",";
	}
	delete []par;
	delete []non;
}
