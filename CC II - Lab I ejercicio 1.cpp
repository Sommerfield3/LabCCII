/*1. Escriba un c�digo que solicite al usuario ingresar dos n�meros enteros y que muestre el producto de ambos.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	cout<<"Ingrese el primer n�mero: ";
	cin>>a;
	cout<<endl;
	cout<<"Ingrese el segundo n�mero: ";
	cin>>b;
	cout<<endl;
	c=a*b; /*Multiplicamos "a" y "b".*/
	cout<<"El resultante de multiplicar los dos n�meros anteriores es: "<<c;
	return 0;
}

