/*3. Elabore un programa que solicite ingresar una hora del día (HH:MM en formato de cadena), solicite un tiempo en minutos a agregar, y retorne la hora de finalización (el formato de salida debe de estar en AM o PM según corresponda).*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Horas, Minutos;
	int Agregar, Total;
	int NuevaHora, NuevosMinutos;
	int i=0;
	int Totaldividido;
	while (i<1){
		cout<<"Ingrese una hora del día (formato 24 horas): ";
		cin>>Horas;
		cout<<endl;
		if (Horas>=0 && Horas<=23){
			i++;
		}
		else{
			cout<<"Ingrese un valor válido."<<endl;
		}
	}
	i=0;
	while (i<1){
		cout<<"Ingrese los minutos de la hora indicada: ";
		cin>>Minutos;
		cout<<endl;
		if (Horas>=0 && Minutos<=59){
			i++;
		}
		else{
			cout<<"Ingrese un valor válido."<<endl;
		}
	}
	i=0;
	cout<<"Indique cuantos minutos desea agregar a la hora actual: ";
	cin>>Agregar;
	Total=(Horas*60)+Minutos+Agregar;
	NuevaHora=(Total/60)%12;
	NuevosMinutos=Total%60;
	Totaldividido=Total%1440;
	if (Totaldividido<720){
		if (NuevosMinutos>9){
			cout<<"La hora de finalización es "<<NuevaHora<<":"<<NuevosMinutos<<" AM"<<endl;
		}
		else{
			cout<<"La hora de finalización es "<<NuevaHora<<":0"<<NuevosMinutos<<" AM"<<endl;
		}
	}
	else{
		if (NuevosMinutos>9){
			cout<<"La hora de finalización es "<<NuevaHora<<":"<<NuevosMinutos<<" PM"<<endl;
		}
		else{
			cout<<"La hora de finalización es "<<NuevaHora<<":0"<<NuevosMinutos<<" PM"<<endl;
		}
	}
	return 0;
}

