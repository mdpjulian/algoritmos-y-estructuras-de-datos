#include <iostream>
using namespace std;

int k, m, n, centinela;  // centinela para evitar que el producto haga += cada vez que se elije la opcion 3
const int FILAS =15;
const int COLUMNAS =15;
typedef int tMatriz[FILAS][COLUMNAS];
tMatriz matrizA, matrizB, matrizC;

void ejecutarSwitch(int opcion);
void crearMatrices();
void mostrarMatrizAyB();
void mostrarMatrizC();
void buscarSilla();

int main(){
	int opcion;

	crearMatrices();
	mostrarMatrizAyB();

	do{
		cout << "_-_-_-_-_-_-_-_-_-_-_-_-" << endl;
		cout << "Elija una opcion!" << endl;
        cout << "1.- Sumar matriz A con B" << endl;
        cout << "2.- Restar matriz A con B" << endl;
        cout << "3.- Producto matriz A * B" << endl;
        cout << "4.- Buscar Silla de matriz C" << endl;
        cout << "5.- Crear nuevas matrices A y B" << endl;
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
			for(int i=0;i < k; i++)
				for(int j=0; j< m; j++)
					matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
			mostrarMatrizC();
			break;
		case 2:
			for(int i=0;i < k; i++)
					for(int j=0; j< m; j++)
						matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
			mostrarMatrizC();
			break;
		case 3:
			if(centinela != 1){
				for(int i=0; i<k; ++i)
	        		for(int j=0; j<n; ++j)
	           			for(int z=0; z<m; ++z)
	                		matrizC[i][j] += matrizA[i][z] * matrizB[z][j];
			}
			centinela = 1;
            mostrarMatrizC();
			break;
		case 4:
			buscarSilla();
			break;
		case 5:
			crearMatrices();
			break;
		case 0:
			cout << "Fin del programa!";
			break;
		default:
			cout << "Opcion desconocida!"<< endl;
			break;
	}
}
void crearMatrices(){

	cout << "Ingrese las Filas de matriz A: " << endl;
	cin >> k;
	cout << "Ingrese las Columnas de matriz A: " << endl;
	cin >> m;
	for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j){
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>matrizA[i][j];
        }
    cout << endl;
    cout << "Filas de B: " << m << "(definido por las Columnas de A!)" << endl;
    cout << "Ingrese las Columnas de matriz B: " << endl;
    cin >> n;
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j){

            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>matrizB[i][j];
        }
    //Inicializacion de la matriz C con ceros.
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            matrizC[i][j] = 0;


}
void mostrarMatrizAyB(){
	cout << endl;
	cout << "Matriz A: " << endl;
    for(int i=0; i<k; ++i){
        for(int j=0; j<m; ++j){
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matriz B: " << endl;
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }
}
void mostrarMatrizC(){
	cout << "Matriz C: " << endl;
	for(int i=0; i<k; ++i){
        for(int j=0; j<n; ++j){
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
}
void buscarSilla(){
	int aux = 9999, f, x;
	bool esMayorCol = true, encontroSilla = false;

	for (int i=0; i<k; i++){
    	for(int j=0; j<n; j++){
    		if(matrizC[i][j] < aux)
    			aux = matrizC[i][j];
    			x = j;
    			f = i;
    	}
    	for(int y=0; y<k; y++){
    		if(matrizC[y][x] > aux) {	
    			esMayorCol = false;
    		}
    	}
    	if (esMayorCol == true){
    		cout << "Punto de silla en MatrizC[" << f << "][" << x << "] con valor " << aux << endl;
    		encontroSilla = true;
    	}
    }
    if(encontroSilla == false)
    	cout << "No se encontro ningun punto de silla en matrizC" << endl;
}