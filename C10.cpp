#include <iostream>
using namespace std;

int main()
{
	double a=0,b=0,c=0,st=0,iva=0,tt=0,ds=0,tf=0;
	cout<<"Producto 1? ";
	cin>>a;
	cout<<"Producto 2? ";
	cin>>b;
	cout<<"Producto 3? ";
	cin>>c;
	st=a+b+c;
	iva=st*0.15;
	tt=st+iva;
	ds=tt*0.2;
	tf=tt-ds;
	cout<<""<<endl;
	cout<<"El Subtotal es: "<<st<<endl;
	cout<<"El IVA es: "<<iva<<endl;
	cout<<"El Total es: "<<tt<<endl;
	cout<<"El Descuento es: "<<ds<<endl;
	cout<<"El Total final es: "<<tf<<endl;
	cout<<""<<endl;
	cout<<"Con cuanto vas a pagar? ";
	cin>>a;
	b=a-tf;
	cout<<""<<endl;
	cout<<"Tu cambio es: "<<b<<endl;
	cout<<"Gracias por tu compra!";
}
