#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int rep,
		a,
		b;
	
	// pedir
	cout << "Digite el numero de repeticiones que desea " << endl;
	cin >> rep;
	
	cout << "Ingrese un numero " << endl;
	cin >> a;
	
	// ciclo
	for (int i = 1; i < rep; i++){
		
		cout << "ingrese un numero " << endl;
		cin >> b;
		
		// condicion
		if ( b < a ){
			a = b;
		}
		
	}
	cout << "El numero menor es " << a << endl;;
		
	system("PAUSE");
	return 0; 	
}
