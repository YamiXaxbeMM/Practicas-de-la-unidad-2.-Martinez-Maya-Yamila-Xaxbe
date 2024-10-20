#include <iostream>
#include "string"
using namespace std;

int main (){
float base,altura;	

cout << "Ingrese la medida de la base del rectangulo: " "\n";
	cin >> base;

cout << "Ingrese la altura del rectangulo: " "\n";
	cin >> altura;		

float superficie = base * altura;
float perimetro = 2*(base + altura);

cout <<"La superficie del rectangulo es de: " << superficie << endl;
cout <<"El perimetro del cuadrado es de: " << perimetro << endl;
return 0;
}
