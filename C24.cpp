#include <iostream>
using namespace std;

int main ()
{
	int edad;
	cout<<"Cuantos a\xA4os tienes? ";
	cin>>edad;
	if (edad>=18)
	{
		cout<<"Puedes pasar a la fiesta"<<endl;
	}
	else
	{
		cout<<"Lo sentimos, no puedes ingresar"<<endl;
	}
}
