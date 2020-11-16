#include <iostream>

using namespace std;
const int MAX = 6;

int main(){
	int n, aux;
	int *pAux=&aux;
	int *p = new int[MAX];
	cout << "Ingrese 6 numeros: " << endl;
	//Relleno array
	for(int i=0; i<6; i++){
		cin>>*(p+i);
	}
	//Ordenamiento
	for(int i= 1; i < MAX; i++){
		int pos = i;
		while ((pos > 0) && (p[pos - 1] > p[pos])){
		aux = p[pos];
		p[pos] = p[pos - 1];
		p[pos - 1] = aux;
		pos--;
		}
	}
	//Muestro array
	for(int i=0; i<6; i++){
		cout << *(p+i) << " ";
	}
	delete [] p;
return 0;
}