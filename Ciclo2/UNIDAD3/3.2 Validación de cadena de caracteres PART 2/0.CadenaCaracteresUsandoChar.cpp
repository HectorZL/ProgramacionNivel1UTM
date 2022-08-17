#include<stdio.h>
#include<conio.h>
#include "iostream"
using namespace std;

int main()
{
    char programador[16]="Pablo Rodriguez";
    cout<<"--"<<endl;
    printf("Nombre del programador:");
    cout<<"--"<<endl;
    cout<<programador[15];
    cout<<"--"<<endl;
    for(int i=0;i<=15;i++){
    	cout<<programador[i]<<endl;
	}
	cout<<"--"<<endl;
	printf("%s",programador);
    getch();
    return 0;
}
