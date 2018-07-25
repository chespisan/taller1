#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	// var
	int num;
	
	// pedir
	cout << "Ingrese un numero a multiplicar del 1 al 10 " << endl;
	cin >> num;
	
	// ciclo
	for( int i = 1; i<=10; i++){
		cout << num  << " x " << i << " = " << num*i << endl;
	}
	
	system("PAUSE");
	return 0;
}
