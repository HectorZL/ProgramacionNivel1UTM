#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"
using namespace std;

int main(){
	
	int resultado;
    char frase[100],frase2[100];
   	cout<<"Ingrese un texto la frase 1 "<<endl;
   	//Para capturar datos en una cadena de caracteres se usa gets(char);
   	gets(frase);
   	printf("la cadena numero 1 es : %s \n",frase);
    //Para contar se usa strlen en una cadena de caracteres
    cout<<"El numero de caracteres de la cadena 1 es : "<<strlen(frase)<<endl;
    cout<<"Ingrese un texto de la frase 2 \n";
   	//Para capturar datos en una cadena de caracteres se usa gets(char);
   	gets(frase2);
    printf("la cadena numero 2 es %s \n",frase2);
    cout<<"El numero de caracteres de la cadena 2 es : "<<strlen(frase)<<endl;
    
    if(resultado=strcmp(frase,frase2)==0){
    	
    	cout<<"las cadenas son iguales \n";
    	
	}else if(resultado=strcmp(frase,frase2)>0){
		
		printf("La cadena 1 %s es mayor  \n",frase);
		
	}else{
		printf("La cadena 2 %s es mayor \n",frase2);
	}

    return 0;
}
