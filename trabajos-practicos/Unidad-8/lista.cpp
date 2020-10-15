#include <iostream>
#include <fstream>
using namespace std;
#include "modulo.h"

int main(){

	int opcion;
	bool ordenarASC = true;

	CrearListaEjemplo();
	leerArchivo();

	do{
		cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
		cout << "Elija una opcion!" << endl;
        cout << "1.- Mostar Lista de alumnos" << endl;
        cout << "2.- Buscar alumno determinado" << endl;
        cout << "3.- Agregar alumno nuevo" << endl;
        cout << "4.- Eliminar alumno existente" << endl;
        cout << "5.- Ordenar por nombre y mostrar" << endl;
        cout << "0.- Salir" << endl; 
        cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
        cin >> opcion;

    ejecutarSwitch(opcion, ordenarASC);

	} while (opcion !=0);
	
return 0;
}