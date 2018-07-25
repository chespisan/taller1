#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	// variables
	int horas,
		horasExtras,
		sueldoBasico,
		sueldoExtra;
		
	// pedir numero de horas trabajadas
	cout << "¿Cuantas horas trabajo?" << endl;
	cin >> horas;
	
	// condicion
	if ( horas <= 40 ) {
		sueldoBasico = horas * 16;
		cout << "El salario semanal es de " << sueldoBasico << endl;
	} else {
		sueldoBasico = 40 * 16; // total costo horas basicas 
		horasExtras = (horas - 40) * 20; // total costo horas extras
		sueldoExtra = sueldoBasico + horasExtras; // total de horas trabajadas
		
		cout << sueldoBasico << endl;
		cout << horasExtras << endl;
		cout << "El salario semanal es de " << sueldoExtra << endl;	
	}

system("PAUSE");
return 0;
}
