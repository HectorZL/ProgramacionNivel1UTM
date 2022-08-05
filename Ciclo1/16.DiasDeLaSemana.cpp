#include "iostream"
using namespace std;
int  main(){
	int salir=1,opc;
while(salir==1){
	
	cout<<"Ingrese el numero de dia "<<endl;
	cout<<"Salir 8"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Lunes"<<endl;
			break;
		case 2:
			cout<<"Martes"<<endl;
			break;
		case 3:
			cout<<"Miercoles"<<endl;
			break;
		case 4:
			cout<<"Jueves"<<endl;
			break;
		case 5:
			cout<<"Viernes"<<endl;
			break;
	    case 6:
	    	cout<<"Sabado"<<endl;
			break;
		case 7:
	    	cout<<"Domingo"<<endl;
			break;
		case 8:
			cout<<"Adios"<<endl;
			salir=0;
			break;
		default:
		     cout<<"Ingrese un numero del 1 al 7"<<endl;
		     break;
	}
}	
}
