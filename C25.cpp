#include <iostream>
using namespace std;

int main ()
{
	int log,kar,c,prom;
	cout<<"Examen logico? ";
	cin>>log;
	cout<<"Examen karel? ";
	cin>>kar;
	cout<<"Examen C++? ";
	cin>>c;
	prom=(log+kar+c)/3;
	if (prom>=220)
	{
		cout<<"Eres \xA5o\xA4o, Felicidades, Estas en la final!"<<endl;
	}
	else
	{
		cout<<"No eres finalista, tu promedio es de: "<<prom<<endl;
		cout<<"Lo sentimos!"<<endl;
	}
}
