#include <iostream>
using namespace std;
#include <string>
main(){
	int n;
	cout<<"Ingre el numero de elementos del vector"<<endl;
	cin>>n;
	
	int a[n],i,mayor=0,menor=0,mayor10=0;;
	double suma=0,promedio=0;
	
	for(i=0;i<n;i++){
		
 	cout<<"\n Ingrese el elemento de la posicion["<<i<<"]=";
	cin>>a[i];
	
 	}
 	
 	for(i=0;i<n;i++){
 		
	cout<<"\n El elemento de la posicion a["<<i<<"]="<<a[i];
	suma=suma+a[i];
	
	if(a[i]>mayor){
		cout<<" El elemento es mayor que el elemento ingresado NUEVO MAYOR"<<endl;
		mayor=a[i];
	}else{
		if(a[i]<menor){
		cout<<" El elemento es MENOR que el elemento ingresado NUEVO MENOR"<<endl;
		menor=a[i];
			}
		}
	if(a[i]>10){
		cout<<"\n El elemento "<<a[i]<<" es mayor a 10"<<endl;
		mayor10=mayor10+1;
	}
	}
	
	promedio=suma/n;
	cout<<"\n Los numeros mayores a 10 son : "<<mayor10<<endl;
	cout<<"\n El promedio seria  :"<<promedio;
  	cout<<"\n El elemento menor seria :"<<menor;
	cout<<"\n El elemento mayor seria:"<<mayor;
  	return 0;
}
