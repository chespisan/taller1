#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float total = 0,
		inversion;
		
	cout << "Cuanto desea invertir?" << endl;
	cin >> inversion;
	
	for( int i = 1; i <= 2; i++) {
		
		inversion = inversion + (inversion * 0.02);
		total = inversion;
	}

	cout << "la ganancia final es: " << total << endl;
		
		
	system("PAUSE");
	return 0;
}
