#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int din=20;
	srand((unsigned)time(NULL));
	while (din>0)
	{
		int auxn,aux;
		char cont;
		auxn=rand()%4+1;
		din-=5;
		cout<<"Un numero de 1 al 4? ";
		cin>>aux;
		if (auxn==aux)
		{
			din+=10;
			cout<<"Felicidades, tu saldo es "<<din<<endl;
			cout<<endl;
		}
		else
		{
			cout<<"Perdiste, tu saldo es "<<din<<endl;
			cout<<endl;
		}
		if (din>0)
		{	
			cout<<"continuas jugando? (s/n) ";
			cin>>cont;
			cout<<endl;
			if ((cont=='s')||(cont=='S'))
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	if (din>=20)
	{
		cout<<"Gracias por jugar. Felicidades, tu saldo es de: "<<din;
	}
	if ((din<20)&&(din>0))
	{
		cout<<"Gracias por jugar. Suerte para la proxima, tu saldo es de: "<<din;
	}
	if (din==0)
	{
		cout<<"Que tristeza me da tu vida. Estas quebrado"<<endl;
	}
}
