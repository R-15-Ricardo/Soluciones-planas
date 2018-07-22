#include <iostream>
using namespace std;

main (){
	int temp;
	cout<<"Temperatura? ";
	cin>>temp;
	cout<<"Usa ";
	if (temp>=30){
		cout<<"camiseta y short"<<endl;
	}
	if ((temp<30)&&(temp>15)){
		cout<<"camiseta y jeans"<<endl;
	}
	if (temp<0){
		cout<<"gabardina y calentadores"<<endl;
	}
	if ((temp<=15)&&(temp>0)){
		cout<<"sueter y jeans"<<endl;
	}
}
