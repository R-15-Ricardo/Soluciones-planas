#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;

int main ()
{
	int cpu=0,p1=0,d1,d2;
	bool stop=false;
	srand((unsigned)time(NULL));
	while(stop==false)
	{
		int max=0;
		d1=rand()%6+1;
		cout<<"Dado de COMPUTADORA: "<<d1<<endl;
		d2=rand()%6+1;
		cout<<"Dado de HOOMAN: "<<d2<<endl;
		max=(d1>max)?d1:max;
		max=(d2>max)?d2:max;
		cout<<"El ganador es ";
		if (d1==d2)
		{
			cout<<"NADIE"<<endl;
		}
		else
		{
			if (max==d1)
			{
				cpu+=d1+d2;
				cout<<"LA COMPUTADORA"<<endl;
			}
			if (max==d2)
			{
				p1+=d1+d2;
				cout<<"EL HOOMAN"<<endl;
			}
		}
		cout<<"Puntos - HOOMAN: "<<p1<<" - COMPUTADORA: "<<cpu<<endl;
		if ((cpu>=100)||(p1>=100))
		{
			cout<<"FIN DEL JUEGO"<<endl;
			stop=true;
		}
		else
		{
			cout<<"Presione cualquier tecla para continuar"<<endl;
			cout<<endl;
			getch();
		}
	}
}
