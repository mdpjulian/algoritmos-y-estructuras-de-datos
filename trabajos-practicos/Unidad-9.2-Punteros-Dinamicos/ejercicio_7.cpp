#include <iostream>

using namespace std;
const int MAX = 3;
typedef struct {
    string nombre;
    int edad;
    float promedio;
}tAlumno;
typedef tAlumno tLista[MAX];

void cargarDatos(tAlumno *alumno);
void mostrarMejorPromedio(tAlumno *alumno);

int main(){

	tLista alumno;
	tAlumno *pAlumno = alumno;
	cargarDatos(pAlumno);
    mostrarMejorPromedio(pAlumno);

return 0;
}
void cargarDatos(tAlumno *alumno) {

	for(int i = 0; i < MAX; i++){
        cout << "(Datos Alumno " << i + 1 << ")" << endl;
		cout << "Nombre: ";
        cin.sync();
        getline(cin, (alumno + i)->nombre);
		cout << "Edad: ";
		cin >> (alumno + i)->edad;
		cout << "Promedio: ";
		cin >> (alumno + i)->promedio;
		cout << endl;
	}
}
void mostrarMejorPromedio(tAlumno *alumno) {
	float mayor = -99;
	int pos = 0;

	for(int i = 0; i < MAX; i++){
		if((alumno + i)->promedio > mayor) {
			mayor = (alumno+i)->promedio; 
			pos = i;
		}
	}
	cout << "Alumno con mejor promedio: " << endl;
	cout << "Nombre: " << (alumno + pos)->nombre << endl;
	cout << "Edad: " << (alumno + pos)->edad << endl;
	cout << "Promedio: " << (alumno + pos)->promedio << endl;
}