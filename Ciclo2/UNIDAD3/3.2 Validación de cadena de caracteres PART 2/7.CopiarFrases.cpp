#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"
using namespace std;

int main(){
	
    char frase[100],frase2[100];
   	cout<<"Ingrese un texto "<<endl;
   	//Para capturar datos en una cadena de caracteres se usa gets(char);
   	gets(frase);
   	printf("%s",frase);
    //Para contar se usa strlen en una cadena de caracteres
    cout<<strlen(frase);
    //strcpy nos permite copiar frases
    strcpy(frase2,frase);
    //imprimir frase 2 
    printf("%s",frase2);
    return 0;
    
}
