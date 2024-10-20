#include <iostream>
#include "string"
#include <math.h>
using namespace std;

int main (){
float A;

cout << "Ingrese un valor para elevarlo al cuadrado y al cubo: " "\n";
	cin >> A;	
		
float opera = pow(A,2);
float opera1 = pow(A,3);
cout <<"El cuadrado del numero ingresado es de: " << opera << endl;
cout <<"El cubo del numero ingresado es de: " << opera1 << endl;
return 0;
}
