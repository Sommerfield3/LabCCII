/*3. Escribir un programa que visualice en pantalla los números múltiplos de 5 comprendidos entre 1 y 100.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
void Multiplos (int min, int max, int mul){
	cout<<"Los múltiplos de "<<mul<<" comprendidos entre "<<min<<" y "<<max<<" son: ";
	cout<<"[";
	for (int i=min;i<max;i++){
		if (i%5==0 && i<(max-mul)){
			cout<<i<<", ";
		}
		else if (i%5==0 && i>=(max-mul)){
			cout<<i<<"]";
		}
	}
}
int main(int argc, char *argv[]) {
	Multiplos(1,100,5);
	return 0;
}

