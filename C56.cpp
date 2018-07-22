#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int *n;
	n=new int [4];
	srand((unsigned)time(NULL));
	for (int i=0;i<5;i++)
	{
		n[i]=rand()%10+1;
		cout<<i+1
		<<": "<<n[i]<<endl;
	}
	delete []n;
}
