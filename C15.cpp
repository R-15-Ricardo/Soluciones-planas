#include <iostream>
using namespace std;

int main ()
{
	int pg,neq,out;
	cout<<"Bienvenido al sistema de seleccion de equipos 3000"<<endl;
	cout<<"Inserte el numero de programadores: ";
	cin>>pg;
	neq=pg/3;
	out=pg%3;
	cout<<"------------------------------------------"<<endl;
	cout<<"Equipos formados: "<<neq<<endl;
	cout<<"Programadores sin equipo: "<<out<<endl;
}




