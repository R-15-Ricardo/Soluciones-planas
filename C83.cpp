#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int *n,*nusu,ap=0,ac=0;
	n=new int [6];
	nusu=new int [4];
	srand((unsigned)time(NULL));
	for (int i=0;i<6;i++)
	{
		n[i]=rand()%25+1;
		for (int j=0;j<i;j++)
		{
			if (n[j]==n[i])
			{
				while (n[j]==n[i])
				{
					n[i]=rand()%25+1;
				}
			}
		}
	}
	cout<<"Apuesta: ";
	cin>>ap;
	cout<<"Numeros: ";
	cin>>nusu[0]>>nusu[1]>>nusu[2]>>nusu[3];
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<6;j++)
		{
			ac+=(nusu[i]==n[j])?1:0;
		}
	}
	if (ac<2)
	{
		cout<<"\nPerdiste"<<endl;
		ap*=0;
	}
	if (ac==2)
	{
		cout<<"\nMantienes tu apuesta, mejor suerte para la proxima"<<endl;
	}
	if (ac==3)
	{
		cout<<"\nFeliciades! Tu apuesta se multiplica por 10!"<<endl;
		ap*=10;
	}
	if (ac>3)
	{
		cout<<"\nFeliciades! Tu apuesta se multiplica por 100!!"<<endl;
		ap*=100;
	}
	cout<<"Dinero final: "<<ap<<endl;
	delete []n;
	delete []nusu;
}
