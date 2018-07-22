#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int lad,ac;
	srand((unsigned)time(NULL));
	for (int i=0;i<5;i++)
	{
		int aux;
		lad=rand()%2;
		cout<<"Que eliges? (1/2): ";
		cin>>aux;
		aux-=1;
		if (aux==lad)
		{
			ac+=1;
			cout<<"Ganaste, llevas "<<ac<<" aciertos"<<endl;
		}
		else
		{
			cout<<"Perdiste, llevas "<<ac<<" aciertos"<<endl;	
		}
	}
	if (ac>=3)
	{
		cout<<"Suertudo, ¡¡EXENTASTE!! Tienes "<<ac<<" aciertos"<<endl;
	}
	else
	{
		cout<<"Vales verga. Tienes "<<ac<<" aciertos"<<endl;
	}
}
