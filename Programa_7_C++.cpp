#include <iostream>
#include "string"
using namespace std;

int main (){
float gal;	

cout << "Ingrese la cantidad de galones de gasolina que va a comprar: " "\n";
cin >> gal;
	
float total = gal * 3.785 * 8.20;
cout <<"El total a pagar es de: " << total << endl;
return 0;
}
