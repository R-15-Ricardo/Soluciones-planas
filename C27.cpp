#include <iostream>
using namespace std;

int main (){
	for (int i;i<i+1;i++)
	{
	int edad;
	cout<<"Edad? ";
	cin>>edad;
	if ((edad<=10)&&(edad>0)){
		cout<<"Ve a la sala A"<<endl;
	}
	if ((edad>10)&&(edad<=15)){
		cout<<"Ve a la sala B"<<endl;
	}
	if ((edad>15)){
		cout<<"Ve a la sala C"<<endl;
	}
}
}
