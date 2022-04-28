/*2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n[50],j;
	int m=2;
	j=0;
	int o=0;
	while (o<1){
		int a=0;
		for (int i=1; i<=m;i++){
			if(m%i==0){
				a++;
			}
		}
		if (a==2 && j<50){
			n[j]=m;
			j++;
		}
		else if (j==50){
			o++;
		}
		m++;
	}
	cout<<"Los primeros 50 números primos son: ";
	for (int e=0;e<50;e++){
		if (e==0){
			cout<<"["<<n[e];
		}
		else if (e==49){
			cout<<", "<<n[e]<<"]";
		}
		else{
			cout<<", "<<n[e];
		}
	}
	
	
	return 0;
}

