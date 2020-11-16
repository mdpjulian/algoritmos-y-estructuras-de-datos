#include <iostream>
#include <string>
#include "persona.h"
using namespace std;

int main()
{
	string nombre;
	int d, m, a, dA, mA, aA;

	cout << "Ingrese el nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese su dia de nacimiento: " << endl;
	cin >> d;
	cout << "Ingrese su mes de nacimiento: " << endl;
	cin >> m;
	cout << "Ingrese su annio de nacimiento: " << endl;
	cin >> a;

	cout << "Ingrese el dia actual: " << endl;
	cin >> dA;
	cout << "Ingrese el mes actual: " << endl;
	cin >> mA;
	cout << "Ingrese el annio actual: " << endl;
	cin >> aA;

	Persona persona1(nombre, d, m, a, dA, mA, aA);

	cout << "Nombre de la persona: " << persona1.GetNombre() << endl;
	cout << "Edad: " << persona1.obtenerEdad() << endl;

	// Pauseo pantalla
	cin.sync();
	cin.get();
	return 0;
}