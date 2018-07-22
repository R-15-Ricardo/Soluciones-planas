#include <iostream>
using namespace std;

int main ()
{
	int m,i,e,est=0;
	cout<<"Espa\xA4ol: ";
	cin>>e;
	cout<<"Ingles: ";
	cin>>i;
	cout<<"Matematicas: ";
	cin>>m;
	est=(e>=60)?est+1:est;
	est=(i>=60)?est+1:est;
	if ((est>=1)&&(m>=60))
	{
		cout<<"Te prestamos el carro"<<endl;
	}
	else 
	{
		cout<<"No te prestamos el carro"<<endl;
	}
}
