/*2. Escriba un código que solicite el primer nombre de una persona, el apellido paterno y el apellido materno. Retornar su correo UNSA generado, el cual consiste de la primera letra del nombre, el apellido paterno completo, y la primera letra del apellido materno. (se agrega el dominio de la universidad al final).*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	string PrimerNombre,PrimerApellido,SegundoApellido;
	string Correo;
	cout<<"Ingrese su primer nombre: ";
	cin>>PrimerNombre;
	cout<<endl;
	cout<<"Ingrese su primer apellido: ";
	cin>>PrimerApellido;
	cout<<endl;
	cout<<"Ingrese su segundo apellido: ";
	cin>>SegundoApellido;
	cout<<endl;
	
	Correo=PrimerNombre[0]+PrimerApellido+SegundoApellido[0]+"@unsa.edu.pe";
	cout<<"Su correo UNSA es: "<<Correo;
	return 0;
}

