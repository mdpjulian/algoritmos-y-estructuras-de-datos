#include <iostream>
#include "alumno.h"
#include <string>
using namespace std;

int main(){
	string nombre, cedula;
	float n1, n2, n3;

	cout << "Ingrese su cedula: " << endl;
	cin >> cedula;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	cout << "Ingrese la nota 1: " << endl;
	cin >> n1;
	cout << "Ingrese la nota 2: " << endl;
	cin >> n2;
	cout << "Ingrese la nota 3: " << endl;
	cin >> n3;

	Alumno alumnoA(cedula, nombre, n1, n2, n3);
	cout << "El alumno: " << alumnoA.GetNombre() << ". Cedula: " << alumnoA.GetCedula() << " Saco: " << alumnoA.NotaFinal() << endl;

	// Pauseo pantalla
	cin.sync();
  	cin.get();
	return 0;
}