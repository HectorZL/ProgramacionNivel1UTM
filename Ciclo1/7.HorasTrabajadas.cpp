#include "iostream"
using namespace std;

int main(){
	int ht,vh,porc,sueldo;
	cout<<"Ingrese las horas trabajadas"<<endl;
	cin>>ht;
	cout<<"Ingrese valor de la hora"<<endl;
	cin>>vh;
	cout<<"Ingrese el valor de la comision"<<endl;
	cin>>porc;
	sueldo=ht*vh*(((ht*vh)*porc)/100);
	cout<<"El sueldo es : "<<endl;
	cout<<sueldo<<endl;
}
