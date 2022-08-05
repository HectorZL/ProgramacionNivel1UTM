#include "iostream"
using namespace std;
int  main(){
	
	int opc,a,b,r,salir=1;
	
	
	while(salir==1){
	
	cout<<"Ingrese un numero del siguiente menu"<<endl;
	cout<<"1.Suma"<<endl;
	cout<<"2.Resta"<<endl;
	cout<<"3.Multiplicacion"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"5.Salir"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Suma de dos numeros "<<endl;
			cout<<"Ingrese el 1er valor"<<endl;
			cin>>a;
			cout<<"Ingrese el 2do valor"<<endl;
			cin>>b;
			r=a+b;
			cout<<"El resultado seria "<<r<<endl;
			break;
		case 2:
			cout<<"Resta de dos numeros "<<endl;
			cout<<"Ingrese el 1er valor"<<endl;
			cin>>a;
			cout<<"Ingrese el 2do valor"<<endl;
			cin>>b;
			r=a-b;
			cout<<"El resultado seria "<<r<<endl;
			break;
		case 3:
			cout<<"Mutiplicacion  de dos numeros "<<endl;
			cout<<"Ingrese el 1er valor"<<endl;
			cin>>a;
			cout<<"Ingrese el 2do valor"<<endl;
			cin>>b;
			r=a*b;
			cout<<"El resultado seria "<<r<<endl;
			break;
		case 4:
			cout<<"Division de dos numeros "<<endl;
			cout<<"Ingrese el 1er valor"<<endl;
			cin>>a;
			cout<<"Ingrese el 2do valor"<<endl;
			cin>>b;
			r=a/b;
			cout<<"El resultado seria "<<r<<endl;
			break;
		case 5:
			cout<<"Un gusto en verte "<<endl;
			salir=0;
			break;
		default:
		     cout<<"Ingrese un numero del 1 al 5"<<endl;
		     break;
	}
}
}
