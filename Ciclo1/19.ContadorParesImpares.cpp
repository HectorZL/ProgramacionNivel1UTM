#include "iostream"
using namespace std;
int  main(){
	
int num,par,impar;

par=0;
impar=0;

cout<<"Ingrese un numero "<<endl;
cin>>num;
for(int i=num; i > 0; i--)
    {
    	cout<<i<<endl;
    	if(i%2==0){
    	par=par+1;
		}else{
			impar=impar+1;
		}
    }
cout<<"Numeros pares "<<par<<endl;
cout<<"Numeros impares "<<impar<<endl;
}
