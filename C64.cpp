#include <iostream>
using namespace std;

int main ()
{
	static int n[5];
	for (int i=0;i<5;i++)
	{
		cout<<"Dame num? ";
		cin>>n[i];
	}
	cout<<"tus numeros fueron: ";
	for (int i=0;i<5;i++)
	{
		
		cout<<n[i]<<",";
	}
}
