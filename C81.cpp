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
	int a,b,n;
	cout<<"Pocision a cambiar: ";
	cin>>a>>b;
	cout<<"Numero a insertar: ";
	cin>>n;
	m2d[a-1][b-1]=n;
}

int main ()
{
	int m2d[maxfil][maxcol]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	imprime(m2d);
	registra(m2d);
	imprime(m2d);
}
