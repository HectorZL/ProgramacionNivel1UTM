#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "iostream"
using namespace std;

int main()
{
    char a[10];
   	cout<<"Ingrese un texto "<<endl;
   	//Para capturar datos en una cadena de caracteres se usa gets(char);
   	gets(a);
   	getch();
   	printf("%s",a);
    getch();
    //Para contar se usa strlen en una cadena de caracteres
    cout<<strlen(a);
    return 0;
}
