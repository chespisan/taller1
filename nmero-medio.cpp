#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int rep,a,b;
	
	cout << "ingrese la cantidad de numeros que desea ingresar " << endl;
	cin >> rep;
	
	cout <<  "ingrese numero" << endl;
	cin >> a;
	
	for(int i = 0; i < rep; i++){
		
		cout << "ingrese un numero" << endl;
		cin >> b;
	
		if ( b < a ){
			a = b;	
		}
	}
	
	cout << "el numero menor es " << a << endl;;
	
	system("PAUSE");
	return 0; 	
}
