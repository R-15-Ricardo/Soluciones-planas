#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	int mat[7][4]={76,77,88,74,86,83,68};
	srand((unsigned)time(NULL));
	cout<<"|  ";
	for (int i=0;i<7;i++)
	{
		cout<<(char)mat[0][i]<<"  |  ";
	}
	cout<<endl;
	for (int i=1;i<3;i++)
	{
		cout<<"|  ";
		for (int j=0;j<7;j++)
		{
			mat[i][j]=rand()%4+1;
			cout<<mat[i][j]<<"  |  ";
		}
		if (i==1)
		{
			cout<<"V matutino";
		}
		if (i==2)
		{
			cout<<"V vespertino";
		}
		cout<<endl;
	}
	cout<<"|  ";
	for (int i=0;i<7;i++)
	{
		mat[3][i]=mat[1][i]+mat[2][i];
		cout<<mat[3][i]<<"  |  ";
	}
	cout<<"Total";
}
