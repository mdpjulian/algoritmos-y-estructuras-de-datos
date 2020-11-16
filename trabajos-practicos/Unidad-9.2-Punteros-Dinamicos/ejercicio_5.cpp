#include <iostream>

using namespace std;

void crearMatrices();
void sumarMatrices();
void mostrarMatrices();
int k, m;
int **pMatrizA, **pMatrizB, **pMatrizC;

int main(){
	
	crearMatrices();
	sumarMatrices();
	mostrarMatrices();

	for (int i = 0; i < k; i++)
    	delete [] pMatrizA[i];
    delete [] pMatrizA;

    for (int i = 0; i < k; i++)
    	delete [] pMatrizB[i];
    delete [] pMatrizB;
return 0;

}
void crearMatrices(){

	cout << "Solo se pueden sumar matrices de la misma dimension" << endl;
	cout << "Ingrese las Filas de matriz A y B: " << endl;
	cin >> k;
	cout << "Ingrese las Columnas de matriz A y B: " << endl;
	cin >> m;

    //Reserva dinamica MatrizA
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
    //Reserva dinamica MatrizB
    pMatrizB = new int *[k];
    for(int i=0; i< k; i++){
        pMatrizB[i] = new int[m];
    }

  
    for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j){

            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>*(*(pMatrizB + i) +j);
        }
    //Reserva dinamica MatrizC
    pMatrizC = new int *[k];
    for(int i=0; i< k; i++){
        pMatrizC[i] = new int[m];
    }

    //Inicializacion de la matriz C con ceros.
    for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j)
            *(*(pMatrizC +i) +j) = 0;


}
void sumarMatrices(){
	for(int i=0;i < k; i++)
		for(int j=0; j< m; j++)
			*(*(pMatrizC + i) +j) = *(*(pMatrizA + i) +j) + *(*(pMatrizB + i) +j);
}
void mostrarMatrices(){
	cout << "Matriz C: " << endl;
	for(int i=0; i<k; ++i){
        for(int j=0; j<m; ++j){
            cout << *(*(pMatrizC + i) +j) << " ";
        }
        cout << endl;
    }
}