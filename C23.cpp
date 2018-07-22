#include <iostream>
using namespace std;

int main ()
{
	int q,m;
	cout<<"Calificacion de matematicas? ";
	cin>>m;
	cout<<"Calificacion de quimica? ";
	cin>>q;
	if((m>59)&&(q==100))
	{
		cout<<"Si vas a la fiesta"<<endl;
	}	
	cout<<"Gracias"<<endl;
}
