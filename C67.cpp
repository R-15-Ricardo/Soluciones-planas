#include <iostream>
using namespace std;

int main ()
{
	static int cal[6];
	int prom,sum;
	for (int i=0;i<6;i++)
	{
		cout<<"Dame cal: ";
		cin>>cal[i];
		sum+=cal[i];
	}
	prom=sum/6;
	cout<<endl;
	cout<<"El promedio de la clase fue: "<<prom<<endl;
	cout<<"Las calificaciones fueron: ";
	for (int i=0;i<6;i++)
	{
		cout<<cal[i]<<",";
	}
	
}
