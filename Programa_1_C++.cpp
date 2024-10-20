#include <iostream>
#include "string"
#include <math.h>
using namespace std;

int main (){
float A,B;

cout << "Por favor ingrese el primer valor A: " "\n";
	cin >> A;	
	
cout << "Por favor ingrese el primer valor B: " "\n";
	cin >> B;	

float sum = A+B;
float opera = pow(sum,2)/3;
cout <<"el resultado de la operacion es de: " << opera << endl;

return 0;
}
