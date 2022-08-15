#include "iostream"
#include "conio.h"
using namespace std;

int main(){
	int num;
	int den;
	int mcd=1;
	int i=2;
	cout<<"Ingrese el numererador"<<endl;
	cin>>num;
	cout<<"Ingrese el denominador"<<endl;
	cin>>den;
	cout<<"El numerador ingresado es : "<<num<<endl;
	cout<<"EL denominador ingresado es : " <<den<<endl;
	do{
		if(num%i==0&&den%i==0){
			mcd=mcd*i;
			num=num/i;
			den=den/i;
			cout<<"Numerador : "<<num<<endl;
			cout<<"Denominador : "<<den<<endl;
			
		}else i++;
	}while(i<=den);
	cout<<"MCD : "<<mcd;
	
}
