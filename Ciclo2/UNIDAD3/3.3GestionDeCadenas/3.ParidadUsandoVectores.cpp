#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"
using namespace std;

int main(){
	
	int vector[5];
	for(int i=0;i<5;i++){
		cout<<"Ingrese el numero de la posicion "<<i<<endl;
		cin>>vector[i];
	}
	for(int a=0;a<5;a++){
		if(vector[a]%2==0){
			cout<<"El numero : "<<vector[a]<<" es par "<<endl;
		}else{
			cout<<"El numero : "<<vector[a]<<" es impar "<<endl;
		}
	}
	
}
