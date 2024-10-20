#include <iostream>
#include "string"
using namespace std;

int main (){
char nom[25];
float lon,pes;
	
cout << "Ingrese el nombre del dinosaurio: " "\n";
	cin >> nom;
	
cout << "Ingrese el peso del dinosaurio: " "\n";
	cin >> pes;	

cout << "Ingrese la longitud del dinosaurio: " "\n";
	cin >> lon;	
	
float peskil = pes * 1000;
float lonmet = lon * 0.3074;	
	
cout <<"El nombre del dinosaurio es: " << nom << endl;	
cout <<"El peso en kilogramos del dinosaurio es: " << peskil << endl;
cout <<"La longitud del dinosaurio es: " << lonmet << endl;
}
