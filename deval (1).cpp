#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int presupuesto, 
	 	terreno, 
		automovil;
		
	cout << "presupuesto" << endl;
	cin >> presupuesto;
	
	// proceso
	automovil = (presupuesto * 0.10) * 3;
	terreno = (presupuesto * 0.30) * 3;
	
	// condicion 
	if ( automovil < terreno / 2 ) {
		cout << "La mejor opcion es comprar el automovil" << endl;
	}	else {
		cout << "La mejor opcion es comprar el terreno "<< endl;
	}
	
	system("PAUSE");
	return 0;
}
