#include <iostream>
using namespace std;

int main()
{
	double e,m,c,s,p;
	cout<<"Dame la calificacion de espanol: ";
	cin>>e;
	cout<<"Dame la calificacion de matematicas: ";
	cin>>m;
	cout<<"Dame la calificacion de cocina: ";
	cin>>c;
	s=e+m+c;
	p=s/3;
	cout<<"El promedio es: "<<p;
}
