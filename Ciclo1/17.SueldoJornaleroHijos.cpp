#include "iostream"
using namespace std;
int  main(){
	float salir=1,h,v,sueldo;
	int opc;
while(salir==1){
	
	
	cout<<"Ingrese el numero de horas "<<endl;
	cin>>h;
	cout<<"Ingrese el valor de las  horas trabajadas"<<endl;
	cin>>v;
	cout<<"Ingrese el numero de hijos "<<endl;
	cin>>opc;
	
	switch(opc){
		case 1 : case 2:
			cout<<"1 y 2 "<<endl;
			sueldo=h*v*1.10;
			cout<<"El sueldo es : "<<sueldo<<endl;
			break;
		case 3:
			cout<<"3"<<endl;
			sueldo=h*v*1.12;
			cout<<"El sueldo es : "<<sueldo<<endl;
			break;
		case 4:
			cout<<"4"<<endl;
			sueldo=h*v*1.15;
			cout<<"El sueldo es : "<<sueldo<<endl;
			break;
		case 5:case 6: case 7: case 8:
			cout<<"5,6,7,8"<<endl;
			sueldo=h*v*1.20;
			cout<<"El sueldo es : "<<sueldo<<endl;
			break;
		case 9:
			cout<<"9"<<endl;
			salir=0;
			break;
		default:
		     cout<<"Ingrese un numero del 1 al 8"<<endl;
		     break;
	}
}	
}

