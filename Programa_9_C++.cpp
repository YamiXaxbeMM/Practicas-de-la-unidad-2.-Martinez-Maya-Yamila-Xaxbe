#include <iostream>
#include "string"
using namespace std;

int main (){
int dias;

cout << "Ingrese cuantos dias va a convertir a segundos: " "\n";
cin >> dias;	
	
int seg = dias * 24 * 60 * 60;

cout << "En " << dias << " dias son " << seg << " segundos"  "\n" << endl;
}
