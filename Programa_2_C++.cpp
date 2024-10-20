#include <iostream>
#include "string"
using namespace std;

int main (){
float Cal1,Cal2,Cal3,Cal4,Cal5;

cout << "Ingrese la primera calificacion: " "\n";
	cin >> Cal1;	
	
cout << "Ingrese la segunda calificacion: " "\n";
	cin >> Cal2;	

cout << "Ingrese la tercera calificacion: " "\n";
	cin >> Cal3;

cout << "Ingrese la cuarta calificacion: " "\n";
	cin >> Cal4;
	
cout << "Ingrese la quinta calificacion: " "\n";
	cin >> Cal5;
	

float promedio = (Cal1+Cal2+Cal3+Cal4+Cal5)/5;	

cout <<"El promedio de las calificaciones es de: " << promedio << endl;
return 0;		
}
