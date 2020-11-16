#include <iostream>
#include "rectangulo.h"
using namespace std;

int main(){
	float Xbase, Xaltura;
	cout << "Ingrese la base del rectangulo: ";
	cin >> Xbase;
	cout << "Ingrese la altura del rectangulo: ";
	cin >> Xaltura;

	Rectangulo figura1(Xbase, Xaltura);
	cout << "Perimetro = " << figura1.perimetro() << endl;
	cout << "Area = " << figura1.area() << endl;
	// Pauseo pantalla
	cin.sync();
  	cin.get();
	return 0;
}