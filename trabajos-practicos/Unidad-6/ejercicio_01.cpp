#include <iostream>
#include <fstream>
using namespace std;

int i=0, cantidadProducto=0;

const int MAXPRODUCTOS = 100;
typedef struct{
	int id;
	double precio;
	int unidades;
}tProducto;
typedef tProducto tLista[MAXPRODUCTOS];
tLista lista;

void crearListaEjemplo();   // Lista usada para probar el programa
void ejecutarSwitch(int opcion);
void mostrarProductos();
void leerArchivo();
void mostrarMaximo();
void eliminarIdenticador();

int main(){

	int opcion;

	crearListaEjemplo();
	leerArchivo();
	do{
		cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
		cout << "Elija una opcion!" << endl;
        cout << "1.- Leer y Mostrar productos en pantalla" << endl;
        cout << "2.- Mostrar producto con maximo valor" << endl;
        cout << "3.- Eliminar identificador de producto" << endl;
        cout << "0.- Salir" << endl; 
        cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
        cin >> opcion;

    ejecutarSwitch(opcion);

	} while (opcion !=0);
	
return 0;
}
void ejecutarSwitch(int opcion){

	switch(opcion){
		case 1:
			mostrarProductos();
			break;
		case 2:
			mostrarMaximo();
			break;
		case 3:
			eliminarIdenticador();
			break;
		default:
			cout << "Opcion desconocida!"<< endl;
			break;
	}
}
void leerArchivo(){
	ifstream archivo;
	archivo.open("ArchivoProductos.txt");
	while(archivo >> lista[cantidadProducto].id >> lista[cantidadProducto].precio >> lista[cantidadProducto].unidades){
			cantidadProducto++;
	}
	archivo.close();
}
void mostrarProductos(){
	for (i=0;i < cantidadProducto; i++){ 
		cout << "iD: " << lista[i].id << " precio: " << lista[i].precio << " unidades: " << lista[i].unidades << endl;
	}
}
void mostrarMaximo(){
	int mayor=0, x;
	for (i=0;i < cantidadProducto; i++){ 
		if (lista[i].precio * lista[i].unidades > mayor){
			mayor = lista[i].precio * lista[i].unidades;
			x = i;
		}
	}
	cout << "El producto: #" << lista[x].id << " con un total de $" << mayor << " es el de mayor valor." << endl;
}
void eliminarIdenticador(){
	ofstream escribirArchivo;

	int s;
	cout << "Ingrese el identifacador que desea eliminar: " << endl;
	cin >> s;
	for(i=0; i < cantidadProducto; i++){
		if (lista[i].id == s){
			for (i = i; i < cantidadProducto; i++){
				lista[i] = lista[i + 1];
			}
			cantidadProducto--;
			escribirArchivo.open("ArchivoProductos.txt");
			for (i=0; i < cantidadProducto; i++){
				escribirArchivo << lista[i].id << " " <<  lista[i].precio << " " << lista[i].unidades << endl;
			}
			escribirArchivo.close();
			cout << "Identificador #" << s << " eliminado correctamente!" << endl;
		}
	}
}
void crearListaEjemplo(){
	ofstream escribirArchivo;
	escribirArchivo.open("ArchivoProductos.txt");
	escribirArchivo << 74 << " " << 50 << " " << 1 << endl << 12 << " "<< 25.99 << " " << 2 << endl << 23 << " " << 10.5 << " " << 8;
	escribirArchivo.close();
}