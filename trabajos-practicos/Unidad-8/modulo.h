#ifndef modulo_h
#define modulo_h

const int MAX = 100;
typedef struct{
	string nombre;
	string apellido;
	string carrera;
	int anio;
}Alumno;

typedef Alumno tAlumno[MAX];

void CrearListaEjemplo();
void ejecutarSwitch(int opcion, bool ordenarASC);
void leerArchivo();
void escribirArchivo();
void eliminarAlumno();
void mostrarAlumnos(bool ordenarASC);
void agregarNuevoAlumno();
void buscarAlumnoDeterminado();
void OrdenarLista();
bool operator>(Alumno opIzq, Alumno opDer);

#endif