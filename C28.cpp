#include <iostream>
using namespace std;

int main ()
{
	int ed;
	cout<<"Cual es tu edad? ";
	cin>>ed;
	if ((ed>=9)&&(ed<12))
	{
		cout<<"Eres de la categoria de primaria"<<endl;
	}
	if ((ed>=12)&&(ed<16))
	{
		cout<<"Eres de la categoria de secundaria"<<endl;
	}
	if ((ed>=16)&&(ed<19))
	{
		cout<<"Eres de la categoria de OMI"<<endl;
	}
	if ((ed>=19)&&(ed<24))
	{
		cout<<"Eres de la categoria de universitaria"<<endl;
	}
	if ((ed<9)||(ed>23))
	{
		cout<<"Lo siento, no puedes participar"<<endl;
	}
}
