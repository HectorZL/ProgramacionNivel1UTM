#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"
using namespace std;

int potencia(int num,int base){
	cout<<num;
	cout<<base;
	for(int i=1;i<base;i++){
		num*=base;
	}
	return  base;
}
int main(){
	int num,base;
	cout<<"Ingrese un numero \n";
	cin>>num;
	cout<<"Ingrese la base \n";
	cin>>base;
	
	cout<<"El resultado seria : "<<potencia(num,base);
}
