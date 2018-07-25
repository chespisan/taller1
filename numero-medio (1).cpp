#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	// var
	int a,b,c;
	
	// pedir numeros
	cout << "Ingrese numero 1" << endl;
	cin >> a;
	
	cout << "Ingrese numero 2" << endl;
	cin >> b;
	
	cout << "Ingrese numero 3" << endl;
	cin >> c;
	
	// condicion
	if ( a<b && a>c || a>b && a<c ) {
		cout << "El numero del medio es " << a << endl;
	} else if( b<a && b>c || b>a && b<c ){
		cout << "El numero del medio es " << b << endl;
	} else if( c<a && c>b || c>a && c<b  ) {
		cout << "El numero del medio es " << c << endl;
	}

	system("PAUSE");
	return 0; 	
}
