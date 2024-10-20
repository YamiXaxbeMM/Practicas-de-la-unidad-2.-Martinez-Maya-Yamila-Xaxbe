#include <iostream>
#include "string"
#include <math.h>
using namespace std;

int main (){
float L1,L2,L3;	
	
cout << "Ingresa el valor de L1: " "\n";
cin >> L1;

cout << "Ingresa el valor de L2: " "\n";
cin >> L2;

cout << "Ingresa el valor de L3: " "\n";
cin >> L3;	

float s = (L1 + L2 + L3)/2;
float area = pow((s*(s-L1)* (s-L2)*(s-L3)),0.5);

cout <<"El calculo auxiliar es de: " << s << endl;
cout <<"El area es de: " << area << endl;
return 0;
}
