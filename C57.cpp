#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int n,a;
	srand((unsigned)time(NULL));
	n=rand()%3+1;
	cout<<"La computadora genero un numero random del 1 al 3. Cual crees que es? ";
	cin>>a;
	cout<<"El numero generado fue el "<<n;
	if (a==n)
	{
		cout<<". Ganaste!!";
	}
	else
	{
		cout<<". Lo siento, perdiste.";
	}
}
