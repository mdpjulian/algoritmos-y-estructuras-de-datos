#include <iostream>
#include "figura.h"
#include "circulo.h"
#include "triangulo.h"
#include "rectangulo.h"

using namespace std;

void EjecutarSwitch(int x);

int main(){
	int x;	
	
	do{

	cout << "1-Crear Figura y dibujar" << endl;
	cout << "2-Crear Circulo y dibujar" << endl;
	cout << "3-Crear Triangulo y dibujar" << endl;
	cout << "4-Crear Rectangulo y dibujar" << endl;
	cout << "5-Recorrer Array(crear 1 figura de cada tipo primero!)" << endl;
	cout << "0-Finalizar programa" << endl;
	cin >> x;
	
	EjecutarSwitch(x);

	}while (x != 0);
  	cin.sync();
  	cin.get();
  	
  	return 0;
}
void EjecutarSwitch(int x){
	Figura *pF0, *pF1, *pF2, *pF3;
	Figura *pArray[4];

	switch(x){
		case 1:
			pF0 = new Figura();
			pArray[0] = pF0;
			pF0->Dibujar();
			break;
		case 2:
			pF1 = new Circulo();
			pArray[1] = pF1;
			pF1->Dibujar();
			break;
		case 3:
			pF2 = new Triangulo();
			pArray[2] = pF2;
			pF2->Dibujar();
			break;
		case 4:
			pF3 = new Rectangulo();
			pArray[3] = pF3;
			pF3->Dibujar();
			break;
		case 5:
			for(int i=0;i <4; i++){
				pArray[i]->Dibujar();
			}
			break;
		case 0:
			delete pF0, pF1, pF2, pF3;
			cout << "Pulse enter para finalizar!";
			break;

		default:
		cout << "opcion incorrecta" << endl;
	}
	
  	

}