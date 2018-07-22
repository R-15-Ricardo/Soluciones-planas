#include <iostream>
using namespace std;

int main ()
{
	static int n[10]={1,3,4,5,6,3,7,3,6,0};
	int p;
	cout<<"Este es el arreglo:"<<endl;
	for (int i=0;i<10;i++)
	{
		cout<<n[i]<<",";
	}
	cout<<"\n"<<endl;
	cout<<"Que poscision quieres desplegar? ";
	cin>>p;
	cout<<"En esa posicion el valor es de "<<n[p-1]<<endl;
}
