#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float inv1,inv2,inv3,invTotal,p1,p2,p3;
	
	cout << "Ingrese inversion 1" << endl;
	cin >> inv1;
	
	cout << "Ingrese inversion 2" << endl;
	cin >> inv2;
	
	cout << "Ingrese inversion 3" << endl;
	cin >> inv3;
	
	invTotal = inv1 + inv2 + inv3;
	
	p1 = (inv1*100)/invTotal;
	p2 = (inv2*100)/invTotal;
	p3 = (inv3*100)/invTotal;
	
	// resultado
	cout << "resultado de la inversion de la persona numero 1" << p1 << endl;
	cout << "resultado de la inversion de la persona numero 2" << p2 << endl;
	cout << "resultado de la inversion de la persona numero 3" << p3 << endl;
	
	
	system("PAUSE");
	return 0;
}
