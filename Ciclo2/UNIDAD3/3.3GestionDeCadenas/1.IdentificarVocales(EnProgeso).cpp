#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"
using namespace std;


int main(){
	
	//programa que indica el numero de vocales
    char frase[100];
    int ca=0,ce=0,ci=0,co=0,cu=0;
    cout<<"Ingrese una frase \n";
    gets(frase);
    for(int i=0;i<strlen(frase);i++){
    	if(frase[i]=="A"){
    		cout<<"+1 vocal a \n";
    		ca++;
		}
	}
	
    cout<<"El numero de vocales en orden seria : \n";
    cout<<"Numero de vocales a : \n"<<ca;
    cout<<"Numero de vocales b : \n"<<ce;
    cout<<"Numero de vocales c : \n"<<ci;
    cout<<"Numero de vocales d : \n"<<co;
    cout<<"Numero de vocales e : \n"<<cu;
    return 0;
}
