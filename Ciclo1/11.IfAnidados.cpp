#include "iostream"
using namespace std;

int  main(){

float a,b,h,pago;
cout<<"Ingrese la base del terreno"<<endl;
cin>>b;
cout<<"Ingrese la altura del terreno"<<endl;
cin>>h;
a=b*h;
pago=a*0.10;

if(a<500){
	cout<<"El area seria : "<<b<<endl;
	cout<<"La altura seria :"<<h<<endl;
	pago=pago*0.05;
	cout<<"El total a pagar seria "<<pago<<endl;
}else {
	
	if(a<=1000){
		
		cout<<"El area seria : "<<b<<endl;
		cout<<"La altura seria :"<<h<<endl;
		pago=pago*0.08;
		cout<<"El total a pagar seria "<<pago<<endl;
		
	}else{
		
		cout<<"El area seria : "<<b<<endl;
		cout<<"La altura seria :"<<h<<endl;
		pago=pago*0.12;
		cout<<"El total a pagar seria "<<pago<<endl;
	}
}


}
