#include <iostream>

using namespace std;

void crearMatriz();
void mostrarTranspuesta();
int k, m;
int **pMatrizA, **pMatrizC;

int main(){
	
	crearMatriz();
	mostrarTranspuesta();

	for (int i = 0; i < k; i++)
    	delete [] pMatrizA[i];
    delete [] pMatrizA;

    for (int i = 0; i < k; i++)
    	delete [] pMatrizC[i];
    delete [] pMatrizC;
return 0;
}
void crearMatriz(){

	cout << "Ingrese las Filas de la matriz: " << endl;
	cin >> k;
	cout << "Ingrese las Columnas de la matriz: " << endl;
	cin >> m;

    //Reserva dinamica Matriz
	pMatrizA = new int *[k];
    for(int i=0; i< k; i++){
        pMatrizA[i] = new int[m];
    }

	for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j){
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>*(*(pMatrizA + i) +j);
        }
    cout << endl;
  
    //Reserva dinamica MatrizC
    pMatrizC = new int *[k];
    for(int i=0; i< k; i++){
        pMatrizC[i] = new int[m];
    }

    //Inicializacion de la matriz transpuesta con ceros.
    for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j)
            *(*(pMatrizC +i) +j) = 0;

    cout << "Matriz original: " << endl;
	for(int i=0; i<k; ++i){
        for(int j=0; j<m; ++j){
            cout << *(*(pMatrizA + i) +j) << " ";
        }
        cout << endl;
    }
}
void mostrarTranspuesta(){
	for(int i = 0; i < k; i++)
		for(int j = 0; j < m; j++)
			*(*(pMatrizC + i) + j) = *(*(pMatrizA + j) + i);

	cout << "Matriz transpuesta: " << endl;
	for(int i=0; i<k; ++i){
        for(int j=0; j<m; ++j){
            cout << *(*(pMatrizC + i) +j) << " ";
        }
        cout << endl;
    }
}