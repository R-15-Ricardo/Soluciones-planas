#include <iostream>
using namespace std;

int main ()
{
	int cale,calm,prom;
	cout<<"Calificacion de matematicas: ";
	cin>>calm;
	cout<<"Calificacion de espanol: ";
	cin>>cale;
	prom=(calm+cale)/2;
	if (prom>60)
	{
		cout<<"Bienvenido al circo"<<endl;
	}
	cout<<"Gracias por venir"<<endl;
}
