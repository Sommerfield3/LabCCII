/*1. Escriba un código que solicite al usuario ingresar dos números enteros y que muestre el producto de ambos.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c;
	cout<<"Ingrese el primer número: ";
	cin>>a;
	cout<<endl;
	cout<<"Ingrese el segundo número: ";
	cin>>b;
	cout<<endl;
	c=a*b; /*Multiplicamos "a" y "b".*/
	cout<<"El resultante de multiplicar los dos números anteriores es: "<<c;
	return 0;
}

