#include <iostream>
#include <windows.h>
using namespace std;

const int maxcol=3,maxfil=5;

void imprime (int m2d[maxfil][maxcol])
{
	for (int i=0;i<maxfil;i++)
	{
		for (int j=0;j<maxcol;j++)
		{
			cout<<m2d[i][j]<<" - ";
		}
		cout<<endl;
	}
}

void registra (int m2d[maxfil][maxcol])
{
	for (int i=0;i<maxfil;i++)
	{
		for (int j=0;j<maxcol;j++)
		{
			cout<<"numero posicion ("<<i<<","<<j<<"): ";
			cin>>m2d[i][j];
			system("CLS");
		}
	}
}

int main ()
{
	int m2d[maxfil][maxcol];
	registra(m2d);
	imprime(m2d);
}
