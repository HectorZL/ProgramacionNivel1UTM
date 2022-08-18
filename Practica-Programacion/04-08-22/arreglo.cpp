#include <iostream>
using namespace std;
#include <string>
main(){
	int n;
	cout<<"Ingre el numero de elementos del vector"<<endl;
	cin>>n;
	int a[n],i,suma=0,par=0,impar=0;

	for(i=0;i<n;i++){
 	cout<<"\n Ingrese el elemento de la posicion["<<i<<"]=";
	cin>>a[i];
 	}
 	for(i=0;i<n;i++){
	cout<<"\n El elemento de la posicion a["<<i<<"]="<<a[i];
	suma=suma+a[i];
	if(a[i]%2==0){
		cout<<" Es par"<<endl;
		par=par+1;
	}else{
		cout<<" Es impar"<<endl;
		impar=impar+1;
	}
	
	}
	cout<<"\n La suma es :"<<suma<<endl;
  	cout<<"\n Numero de elementos pares :"<<par;
	cout<<"\n Numero de elementos impares :"<<impar;
  	return 0;
}

