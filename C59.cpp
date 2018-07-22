#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int n=0,res=0;
	srand((unsigned)time(NULL));
	n=rand()%10+1;
	for (int i=0;i<2;i++)
	{
		int aux;
		cout<<"Que numero crees que estoy pensando? ";
		cin>>aux;
		if (aux>n)
		{
			cout<<"El numero es menor"<<endl;
		}
		if (aux<n)
		{
			cout<<"El numero es mayor"<<endl;
		}
		if (aux==n)
		{
			res=n;
			break;
		}
	}
	if (res==n)
	{
		cout<<"Felicidades!! el nuemero secreto es "<<n<<endl;
	}
	else 
	{
		cout<<"Que numero crees que estoy pensando? ";
		cin>>res;
		if (res==n)
		{
			cout<<"Felicidades!! el nuemero secreto es "<<n<<endl;
		}	
		else
		{
			cout<<"Suerte para la proxima. El nuemero secreto es "<<n<<endl;
		}
	}
	

}
