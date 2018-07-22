#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,e,sum,res;
	cout<<"Ingrese 5 calificaciones: \n"<<endl;
	cin>>a>>b>>c>>d>>e;
	sum=a+b+c+d+e;
	res=sum/5;
	cout<<""<<endl;
	cout<<"El promedio de estas calificaciones es: "<<res<<endl;
}
