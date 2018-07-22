#include <iostream>
using namespace std;

int main ()
{
	int *a,*n;
	a=new int [3];
	n=new int [3];
	*a=6666;
	cout<<"NIP ";
	cin>>*n;
	if (*a==*n)
	{
		int x,y;
		float res;
		cout<<"Entraste"<<endl;
		cout<<"numero 1: ";
		cin>>x;
		cout<<"numero 2: ";
		cin>>y;
		cout<<"Promedio: "<<(x+y)/2.0<<endl;
	}
	else
	{
		cout<<"Acceso denegado"<<endl;
	}
	delete []a;
	delete []n;
	
}
