#include <iostream>
using namespace std;

int main ()
{
	for (int i=0;i<i+1;i++)
	{
	int ed,pes,est;
	cout<<"estatura? ";
	cin>>est;
	cout<<"peso? ";
	cin>>pes;
	cout<<"edad? ";
	cin>>ed;
	if ((est<=150)&&((pes>=40)&&(pes<=60))&&(ed>=18))
	{
		cout<<"Bienvenido al circo de los enanitos"<<endl;
	}
	else
	{
		cout<<"No eres aceptado"<<endl;
	}
	cout<<endl;
	}
}
