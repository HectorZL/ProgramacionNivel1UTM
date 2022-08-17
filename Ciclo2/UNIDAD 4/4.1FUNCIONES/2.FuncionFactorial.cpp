#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"
using namespace std;

long double factorial(int num){
	long double total=1;
	for(int i=2;i<=num;i++){
		total*=i;
		
	}
	cout<<total;
	return total;
}
int main(){
	int fac;
	cout<<"Ingrese un numero para calcular el factorial \n";
	cin>>fac;
	cout<<"El factorial de "<<fac<<" Seria "<<factorial(fac);
}
