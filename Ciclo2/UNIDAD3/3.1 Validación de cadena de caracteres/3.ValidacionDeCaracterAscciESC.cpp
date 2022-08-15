#include "iostream"
#include "conio.h"
using namespace std;

int main(){
	int tecla;
	do{
		tecla=getch();
		cout<<"La tecla presionada en codigo ASCII es la siguiente "<<tecla<<endl;
	}while(tecla!=27);{
	cout<<"Presiono la tecla ESC"<<endl;
	cout<<"Un gusto estimado"<<endl;
	}
}
