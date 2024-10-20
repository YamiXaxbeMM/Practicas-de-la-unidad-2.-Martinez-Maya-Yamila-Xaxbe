#include <iostream>
#include "string"
#include <math.h>
using namespace std;

int main (){
float X1,Y1,X2,Y2;	
	
cout << "Ingresa el valor de X1: " "\n";
cin >> X1;

cout << "Ingresa el valor de Y1: " "\n";
cin >> Y1;

cout << "Ingresa el valor de X2: " "\n";
cin >> X2;

cout << "Ingresa el valor de Y2: " "\n";
cin >> Y2;	

float dis = pow(pow((X1-X2),2) + pow((Y1-Y2),2),0.5);

cout <<"La distancia entre dos puntos es de: " << dis << endl;
return 0;
}
