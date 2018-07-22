#include <iostream>
using namespace std;

int main ()
{
	static int n[5]={2,4,6,8,10};
	int p1,p2;
	for (int i=0;i<5;i++)
	{
		cout<<i+1<<"- "<<n[i]<<endl;
	}
	cout<<endl;
	cout<<"Poscicion a cambiar? ";
	cin>>p1;
	cout<<"Poscicion a cambiar? ";
	cin>>p2;
	cout<<endl;
	n[p1-1]=n[p1-1]+n[p2-1];
	n[p2-1]=n[p1-1]-n[p2-1];
	n[p1-1]=n[p1-1]-n[p2-1];
	for (int i=0;i<5;i++)
	{
		cout<<i+1<<"- "<<n[i]<<endl;
	}
}
