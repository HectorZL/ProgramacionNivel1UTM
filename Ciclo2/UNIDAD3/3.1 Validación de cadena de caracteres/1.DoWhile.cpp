#include "iostream"

using namespace std;

int main(){
	int tabla;
	int cont=1;
	do{
		cout<<"Ingrese un numero entre 2 y 12"<<endl;
		cin>>tabla;
	}while(tabla<2||tabla>12);{
		do{
			cout<<tabla<<" x "<<cont<<" = "<<tabla*cont<<endl;
			cont++;
		}while(cont<=12);
	}
}
