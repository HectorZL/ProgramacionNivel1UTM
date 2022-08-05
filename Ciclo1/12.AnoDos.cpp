#include "iostream"
#include <dos.h>
using namespace std;

int  main(){
	


int anon,edad,hoy=2022;
cout<<"Ingrese el año de nacimiento "<<endl;
cin>>anon;

edad=2022-anon;
cout<<"Su edad seria : "<<edad<<endl;
cout<<"Estamos en el año "<<hoy<<endl;;

if(edad<=1){
	cout<<"Usted es un bebe"<<endl;
}else{
	if(edad>=2 & edad<=12){
		cout<<"Nino"<<endl;
	}else{
		if(edad>=13 & edad<=17){
		cout<<"Adolecente"<<endl;
	}else{
		cout<<"Mayor de edad"<<endl;
	}
	
	}
}

	
}
