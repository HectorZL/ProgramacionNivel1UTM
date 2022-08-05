#include "iostream"
using namespace std;
int  main(){
	
int anterior,actual,siguiente,contador=1,num;
cout<<"Ingresa un numero "<<endl;
cin>>num;
anterior=0;
actual=1;
while(contador<=num){
	siguiente=anterior+actual;
	cout<<" Numero "<<contador<< " Tinene el valor de "<<siguiente<<endl;
	anterior=actual;
	actual=siguiente;
	contador++;
}
cout<<actual;
}
