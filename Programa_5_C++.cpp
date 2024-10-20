#include <iostream>
#include "string"
using namespace std;

int main (){
float total,pago;	

cout << "Ingrese el precio del producto: " "\n";
	cin >> total;

cout << "Ingrese la cantidad de dinero que va a dar: " "\n";
	cin >> pago;		

float cambio = pago-total;

cout <<"Su cambio es de: " << cambio << endl;

return 0;
}
