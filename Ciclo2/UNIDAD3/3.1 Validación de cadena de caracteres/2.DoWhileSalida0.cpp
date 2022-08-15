#include "iostream"

using namespace std;

int main(){
	int n;
	int mayor=0;
	do{
		cout<<"Ingrese un numero positivo <0 para sarli>"<<endl;
		do{
			cin>>n;
		}while(n<0);{
			if(n>0&&n>mayor){
				mayor=n;
			}
		}
	}while(n!=0);{
		cout<<"El mayor es : "<<mayor<<endl;
		return 0;
	}
}
