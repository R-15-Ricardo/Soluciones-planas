#include <iostream>
using namespace std;

int main ()
{
	int pg,neq,out,leq;
	cout<<"Bienvenido al sistema de seleccion de equipos 3000"<<endl;
	cout<<"Inserte el numero de programadores: ";
	cin>>pg;
	cout<<"Inserte el numero de programadores por equipo: ";
	cin>>leq;
	neq=pg/leq;
	out=pg%leq;
	cout<<"------------------------------------------"<<endl;
	cout<<"Equipos formados: "<<neq<<endl;
	cout<<"Programadores sin equipo: "<<out<<endl;
}
