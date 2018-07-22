#include <iostream>
using namespace std;

int main ()
{
	char name[100];
	cout<<"Cual es tu nombre? ";
	cin.getline(name,sizeof(name));
	cout<<"Tu nombre es: "<<name<<endl;
}
