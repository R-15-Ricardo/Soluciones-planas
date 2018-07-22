#include <iostream>
using namespace std;

int main ()
{
	int *c,est=0;
	c=new int [2];
	cout<<"Espa\xA4ol: ";
	cin>>c[0];
	cout<<"Ingles: ";
	cin>>c[1];
	cout<<"Matematicas: ";
	cin>>c[2];
	for (int i=0;i<3;i++)
	{
		if (c[i]>=60)
		{
			est=est+1;
		}
	}
	if (est>=2)
	{
		cout<<"Te prestamos el carro"<<endl;
	}
	else
	{
		cout<<"No te prestamos el carro"<<endl;
	}
	delete []c;
}
