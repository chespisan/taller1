#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	float presupuesto,
		  gine = 0.40, 
		  trauma = 0.30, 
		  pedia = 0.30;
		  
	cout << "INgrese el presupuesto anual" << endl;
	cin >> presupuesto;
		  
	cout << "el presupuesto para gine es " << presupuesto * gine << endl;
	cout << "el presupuesto para trauma es " << presupuesto * trauma << endl;
	cout << "el presupuesto para pedia es " << presupuesto * pedia << endl;	  
	
	system("PAUSE");
	return 0;	
	
}
