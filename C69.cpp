#include <iostream>
using namespace std;

int main ()
{
	static int n[6]={50,30,100,50,100,87};
	int max=0,usu=0;
	for (int i=0;i<6;i++)
	{
		cout<<i+1<<"- "<<n[i]<<endl;
		max=(n[i]>max)?n[i]:max;
	}
	for (int i=0;i<6;i++)
	{
		if (max==n[i])
		{
			usu=i+1;
			break;
		}
	}
	cout<<endl;
	cout<<"La calificacion mayor es: "<<max<<" del usuario "<<usu;
}
