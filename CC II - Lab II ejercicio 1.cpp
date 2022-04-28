/*1. Sumar todos los enteros pares desde 2 hasta 100.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int suma=0;
	for (int i=2;i<101;i++){/*Sumamos todos los elementos a una sola variable*/
		suma+=i;
	}
	cout<<suma;
	return 0;
}

