#include <iostream>
using namespace std;

int main ()
{
	int mon,XX=0,X=0,V=0,I=0;
	cout<<"Bienvenido al fraccionador de monedas 3000"<<endl;
	cout<<"Inserte cantidad de dinero a fraccionar: ";
	cin>>mon;
	if(mon>20)
	{
		XX=mon/20;
		mon=mon%20;
	}
	cout<<"Monedas de 20: "<<XX<<endl;
	if(mon>10)
	{
		X=mon/10;
		mon=mon%10;
	}
	cout<<"Monedas de 10: "<<X<<endl;
	if(mon>5)
	{
		V=mon/5;
		mon=mon%5;
	}
	cout<<"Monedas de 5: "<<V<<endl;
	if(mon>1)
	{
		I=mon/1;
		mon=mon%1;
	}
	cout<<"Monedas de 1: "<<I<<endl;
	
}
