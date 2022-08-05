#include "iostream"
using namespace std;
int  main(){
	int n1,n2,n3,total;
	for(int i=0;i<=5;i++){
		cout<<"Ingrese la nota 1"<<endl;
		cin>>n1;
		cout<<"Ingrese la nota 2"<<endl;
		cin>>n2;
		cout<<"Ingrese la nota 3"<<endl;
		cin>>n3;
		total=(n1+n2+n3)/3;
		cout<<"El promedio seria "<<total<<endl;
	}
}
