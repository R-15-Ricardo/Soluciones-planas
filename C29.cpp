#include <iostream>
using namespace std;

int main ()
{
	int ed,pes,es,est=0;
	cout<<"Estatura? ";
	cin>>es;
	cout<<"Peso? ";
	cin>>pes;
	cout<<"Edad? ";
	cin>>ed;
	if (es>160)
	{
		est=1;
	}
	if (pes>50)
	{
		est=2;
	}
	if (ed<15)
	{
		est=3;
	}
	if (ed>18)
	{
		est=4;
	}
	if (est==1)
	{
		cout<<"Lo siento, eres muy alta o muy gorda"<<endl;
	}
	if (est==2)
	{
		cout<<"Lo siento, tu estatura o peso no va conmigo"<<endl;
	}
	if (est==3)
	{
		cout<<"Lo siento, eres muy joven"<<endl;
	}
	if (est==4)
	{
		cout<<"Lo siento, eres muy vieja"<<endl;
	}
	if (est==0)
	{
		cout<<"Pasame tu numero"<<endl;
	}
}
