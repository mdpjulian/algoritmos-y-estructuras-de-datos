#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int i, idAlumno=0;
ifstream leerArchivo;
ofstream archivo;

struct Alumno
{
	string nombre;
	string apellidos;
	int edad;
	int dni;
	int nota;
}alumno[50];

void ejecutarSwitch(int opcion);
int sacarNotaMedia(int resultado, int contador);
void escribirArchivo();
void mostrarAlumnos();

int main(){

	int opcion;
	string extra;

	leerArchivo.open("AyEDI.txt");
	while(leerArchivo >> extra >> alumno[idAlumno].nombre >> alumno[idAlumno].apellidos >> alumno[idAlumno].edad >> alumno[idAlumno].dni >> alumno[idAlumno].nota){
			idAlumno++;
	}
	leerArchivo.close();

	do{
		cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
		cout << "Elija una opcion!" << endl;
        cout << "1.- Agregar alumno nuevo" << endl;
        cout << "2.- Eliminar alumno existente" << endl;
        cout << "3.- Calificar alumno" << endl;
        cout << "4.- Listado de notas" << endl;
        cout << "5.- Salir" << endl; 
        cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
        cin >> opcion;

    ejecutarSwitch(opcion);

	} while (opcion !=5);
	

return 0;

}


void ejecutarSwitch(int opcion){

	int opcionEliminar, opcionCalificar, notaMedia, notaMayor=0, resultado=0, contador=0;

	switch(opcion){
		case 1:

			if(idAlumno < 50){
				cout << "Escriba el nombre del alumno: ";
				cin >> alumno[idAlumno].nombre;
				cin.sync();
				cout << "Escriba el apellido del alumno: ";
				cin >> alumno[idAlumno].apellidos;
				cin.sync();
				cout << "Escriba la edad del alumno: ";
				cin >> alumno[idAlumno].edad;
				cout << "Escriba el DNI del alumno: ";
				cin >> alumno[idAlumno].dni;
			idAlumno++;
			cout << "-----------------------" << endl;
			escribirArchivo();
			}else{
				cout << "Limite alcanzado" << endl;
			}
			break;
		case 2:
			cout << "ID - NOMBRE - APELLIDO - EDAD - DNI"<< endl;
			cout << "-------------------------------"<< endl;
			mostrarAlumnos();
			cout << "Ingrese el ID del estudiante que desea eliminar!: ";
			cin >> opcionEliminar;

			for(i=opcionEliminar; i < idAlumno; i++){
				alumno[i] = alumno[i + 1];
			}
			idAlumno--;
			cout << "-----------------------" << endl;
			escribirArchivo();

			break;

		case 3:
			cout << "ID - NOMBRE - APELLIDO- EDAD - DNI"<< endl;
			cout << "-------------------------------"<< endl;
			mostrarAlumnos();

			cout << "Ingrese el numero del estudiante que desea calificar!: ";
			cin >> opcionCalificar;

			cout << "Ingrese la nota: ";
			cin >> alumno[opcionCalificar].nota;
			cout << "-----------------------" << endl;
			escribirArchivo();
			break;

		case 4:
			cout << "ID - NOMBRE - APELLIDO - NOTA"<< endl;
			cout << "-------------------------------"<< endl;
			for (i=0; i < idAlumno; i++){
				if(alumno[i].nota != NULL){
					cout << "#" << i << " " << alumno[i].nombre << " " << alumno[i].apellidos << " " << alumno[i].nota << endl;
					resultado = alumno[i].nota + resultado;
					contador++;
					
					if(alumno[i].nota > notaMayor) {
						notaMayor = alumno[i].nota;
					}
				}
			}
			notaMedia = sacarNotaMedia(resultado, contador);
			cout << endl;
			cout << "La nota media es: " << notaMedia << endl;
			cout << "La nota mayor es: " << notaMayor << endl;
			break;
		case 5:
			escribirArchivo();
			break;
		default:
			cout << "Opcion desconocida!"<< endl;
			break;

	}

}
void escribirArchivo(){
	archivo.open("AyEDI.txt");
    for(i=0; i <idAlumno; i++){
    	archivo << "#" << i << " " << alumno[i].nombre << " " << alumno[i].apellidos << " " << alumno[i].edad << " " << alumno[i].dni << " " << alumno[i].nota << endl;
   	}
   	archivo.close();
}
int sacarNotaMedia(int resultado, int contador){
	return resultado / contador;
}
void mostrarAlumnos(){
	for (i=0;i < idAlumno; i++){ 
		cout << "#" << i << " " << alumno[i].nombre << " " << alumno[i].apellidos << " " << alumno[i].edad << " " << alumno[i].dni << endl;
	}
}