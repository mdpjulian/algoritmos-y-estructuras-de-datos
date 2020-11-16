#include <iostream>
#include "articulo.h"

using namespace std;

int main(){
	float precio;
	cout << "Ingrese el precio de su articulo: " << endl;
	cin >> precio;
	Articulo artc(precio);

	cout << "El precio por Mayor es : " << artc.PVPMayor() << endl;
	cout << "El precio por Detal es : " << artc.PVPDetal() << endl;
	// Pauseo pantalla
	cin.sync();
  	cin.get();
	return 0;
}