#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int cab1=0,cab2=0,cab3=0,est=0;
	srand((unsigned)time(NULL));
	while ((cab1<70)&&(cab2<70)&&(cab3<7
	0))
	{
		cab1+=rand()%3+1;
		cab2+=rand()%3+1;
		cab3+=rand()%3+1;
		cout<<"Caballo 1: "<<cab1<<endl;
		cout<<"Caballo 2: "<<cab2<<endl;
		cout<<"Caballo 3: "<<cab3<<endl;
		cout<<endl;
	}
	if (cab1>=70)
	{
		est+=1;
		cout<<"El caballo ganador es el 1"<<endl;
	}
	if (cab2>=70)
	{
		est+=1;
		cout<<"El caballo ganador es el 2"<<endl;
	}
	if (cab3>=70)
	{
		est+=1;
		cout<<"El caballo ganador es el 3"<<endl;
	}
	if (est>=2)
	{
		cout<<"ES UN EMPATE"<<endl;
	}
}
