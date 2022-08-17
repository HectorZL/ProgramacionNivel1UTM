#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"
using namespace std;

string esprimo(int num){
	if(num==1||num==2||num==3)return "Primo";
	for(int i=2;i<=(num/2)+1;i++){
		if(num%i==0)return "No es primo";
		return "Primo";
	}
}
int main(){
	cout<<"Lista de los numeros primos del 1 al 100 \n"<<endl;
	for(int i=1;i<=100;i++){
		cout<<"El numero "<<i<<" "<<esprimo(i)<<endl;
	}
}
