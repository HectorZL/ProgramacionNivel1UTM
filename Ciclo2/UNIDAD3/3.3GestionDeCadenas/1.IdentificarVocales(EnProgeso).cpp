#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"

using namespace std;


int main() {
	int a=0,e=0,i=0,o=0,u=0;
	char frase[100]="";
	cout<<"Ingrese su frase \n";
    gets(frase);
	for(int i=0;i<strlen(frase);i++){
		switch(frase[i]){
			case 'a' : case 'A' :
			a++;
			break;
			case 'e' : case 'E' :
			e++;
			break;
			case 'i' : case 'I' :
			i++;
			break;
			case 'o' : case 'O' :
			o++;
			break;
			case 'u' : case 'U' :
			u++;
			break;
		}
	}
    cout << "Numero de :  a  encontrados en la frase seria :  \n" <<a<< " \n";
    cout << "Numero de :  e  encontrados en la frase seria :  \n" <<e<< " \n";
    cout << "Numero de :  i  encontrados en la frase seria :  \n" <<i<< " \n";
    cout << "Numero de :  o  encontrados en la frase seria :  \n" <<o<< " \n";
    cout << "Numero de :  u  encontrados en la frase seria :  \n" <<u<< " \n";
    

   return 0;
}
