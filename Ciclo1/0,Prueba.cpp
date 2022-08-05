#include "iostream"
using namespace std;
int  main(){
	
string password = "";
cout << "Ingrese la contrasenia: ";
cin >> password;
if(password == "myClave")
{
    cout << "Contrasenia correcta. Bienvenido";
}
else
{
    cout << "Contrasenia incorrecta.";
}
}
