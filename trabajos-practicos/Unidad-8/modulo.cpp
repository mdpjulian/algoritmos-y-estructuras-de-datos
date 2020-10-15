#include <iostream>
#include <fstream>
using namespace std;
#include "modulo.h"

int i=0, idAlumno=0;
ofstream eArchivo;
Alumno tmporal;
tAlumno alumno;

void ejecutarSwitch(int opcion, bool ordenarASC){

	switch(opcion){
		case 1:
			int m;
			cout << "Eleji 1 para lista Ascendente o 2 para lista Decendente!:";
			cin >> m;
			switch(m){
				case 1:
					ordenarASC = true;
					break;
				case 2:
					ordenarASC = false;
					break;
				default:
					cout << "Opcion incorrecta!";
					break;
			}
			mostrarAlumnos(ordenarASC);
			break;
		case 2:
			buscarAlumnoDeterminado();
			break;
		case 3:
			agregarNuevoAlumno();
			escribirArchivo();
			break;
		case 4:
			mostrarAlumnos(ordenarASC);
			eliminarAlumno();
			escribirArchivo();
			break;
		case 5:
			OrdenarLista();
			mostrarAlumnos(ordenarASC);
			break;
		case 0:
			cout << "Fin del programa!";
			break;
		default:
			cout << "Opcion desconocida!"<< endl;
			break;
	}
}
void CrearListaEjemplo(){
	eArchivo.open("Alumnos.txt");
	eArchivo << "#0 pedro rodrigo derecho 2" << endl << "#1 yamila noche tecnico 6" << endl << "#2 carolina dia medicina 4";
	eArchivo.close(); 
}
void leerArchivo(){
	string aux;
	ifstream archivo;
	archivo.open("Alumnos.txt");
	while(archivo >> aux >> alumno[idAlumno].nombre >> alumno[idAlumno].apellido >> alumno[idAlumno].carrera >> alumno[idAlumno].anio){
			idAlumno++;
	}
	archivo.close();
}
void mostrarAlumnos(bool ordenarASC){

	if(ordenarASC == true){
		for (i=0;i < idAlumno; i++){ 
			cout << "#" << i << " Alumno: " << alumno[i].nombre << " Apellido: " << alumno[i].apellido << " Carrera: " << alumno[i].carrera << " Año: " << alumno[i].anio << endl;
		}
	}else{
		for (i=idAlumno - 1;i >= 0; i--){ 
			cout << "#" << i << " Alumno: " << alumno[i].nombre << " Apellido: " << alumno[i].apellido << " Carrera: " << alumno[i].carrera << " Año: " << alumno[i].anio << endl;
		}
	}
}
void eliminarAlumno(){
	int opcionEliminar;
	cout << "Ingrese el ID del estudiante que desea eliminar!: ";
	cin >> opcionEliminar;
	if(opcionEliminar < idAlumno && opcionEliminar >=0){
		for(i=opcionEliminar; i < idAlumno; i++){
			alumno[i] = alumno[i + 1];
		}
		idAlumno--;
	}else cout << "Identificador no existe!" << endl;
}

void escribirArchivo(){
	eArchivo.open("Alumnos.txt");
    for(i=0; i <idAlumno; i++){
    	eArchivo << "#" << i << " " << alumno[i].nombre << " " << alumno[i].apellido << " " << alumno[i].carrera << " " << alumno[i].anio << endl;
   	}
   	eArchivo.close();
}
void agregarNuevoAlumno(){
	if(idAlumno < 100){
				cout << "Escriba el nombre del alumno: ";
				cin >> alumno[idAlumno].nombre;
				cin.sync();
				cout << "Escriba el apellido del alumno: ";
				cin >> alumno[idAlumno].apellido;
				cin.sync();
				cout << "Escriba la carrera del alumno: ";
				cin >> alumno[idAlumno].carrera;
				cout << "Escriba el año de la carrera: ";
				cin >> alumno[idAlumno].anio;
			idAlumno++;
	}else cout << "Lista de Alumnos llena!";
}
void buscarAlumnoDeterminado(){
	string buscar;
	cout << "Ingrese el nombre del alumno que busca: "  << endl;
	cin >> buscar;
	cout << "Alumnos que coinciden con el nombre (" << buscar << "):" << endl;
	for(i=0; i< idAlumno; i++)
		if(alumno[i].nombre == buscar)
			cout << "#" << i << " Alumno: " << alumno[i].nombre << " Apellido: " << alumno[i].apellido << " Carrera: " << alumno[i].carrera << " Año: " << alumno[i].anio << endl;
}
void OrdenarLista(){
	for(int i= 1; i < idAlumno; i++){
		int pos = i;
		while ((pos > 0) && (alumno[pos - 1] > alumno[pos])){
		tmporal = alumno[pos];
		alumno[pos] = alumno[pos - 1];
		alumno[pos - 1] = tmporal;
		pos--;
		}
	}
}
bool operator>(Alumno opIzq, Alumno opDer){
	return (opIzq.nombre > opDer.nombre);
}