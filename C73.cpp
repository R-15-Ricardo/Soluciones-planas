#include <iostream>
using namespace std;

int main ()
{
	static int ar[10]={15,21,6,8,33,54,23,3,22,16};
	int n=0;
	for (int i=0;i<10;i++)
	{
		if ((ar[i]%2)==0)
		{
			cout<<"numero par encontrando: "<<ar[i]<<endl;
			n+=1;
		}
	}
	cout<<"\nTotal de numeros pares: "<<n<<endl;
}
