#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	// variables
	float opt,
		minutos,
		resultado;
		
	// preguntar
	cout << "Que actividad desea realizar, 1 = dormir, 2 = sentado ?" << endl;
	cin >> opt;
	cout << "Cuantos minutos desea realizar la actividad " << endl;
	cin >> minutos;
	
	// condicion
	if ( opt == 1 ) {
		cout << "ud realizo la actividad de dormir durante un periodo de " << minutos << " minutos" << endl;
		resultado = minutos * 1.08;
		cout << "ud consumio " << resultado << " calorias " << endl;
	}	else {
		cout << "ud realizo la actividad sentado durante un periodo de " << minutos << " minutos" << endl;
		resultado = minutos * 1.66;
		cout << "ud consumio " << resultado << " calorias " << endl;
	}
	
	system("PAUSE");
	return 0;
}
