#include <iostream>
using namespace std;

int main ()
{
	static int n[6]={10,30,100,10,100,87};
	int max=0,min,usuM=0,usum=0,sum=0,prom=0;
	min=n[0];
	for (int i=0;i<6;i++)
	{
		cout<<i+1<<"- "<<n[i]<<endl;
		max=(n[i]>max)?n[i]:max;
		min=(n[i]<min)?n[i]:min;
		sum+=n[i];
	}
	for (int i=0;i<6;i++)
	{
		if (max==n[i])
		{
			usuM=i+1;
			break;
		}
	}
	for (int i=0;i<6;i++)
	{
		if (min==n[i])
		{
			usum=i+1;
			break;
		}
	}
	prom=sum/6;
	cout<<endl;
	cout<<"La calificacion mayor es: "<<max<<" del usuario "<<usuM<<endl;
	cout<<"La calificacion menor es: "<<min<<" del usuario "<<usum<<endl;
	cout<<"Es promedio es: "<<prom<<endl;
}
