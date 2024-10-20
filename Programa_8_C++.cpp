#include <iostream>
#include "string"
#include <math.h>
using namespace std;

int main (){
float alt,radio;	

cout << "Ingrese la altura del cilindro: " "\n";
cin >> alt;
	
cout << "Ingrese el radio del cilindro: " "\n";
cin >> radio;	
	
float vol = 3.141592 * (pow(radio,2)) * alt;
float area = 2*3.141592 * radio * alt;

cout <<"El volumen del cilindro es de: " << vol << endl;
cout <<"El area del cilindio es de: " << area << endl;
return 0;
}
