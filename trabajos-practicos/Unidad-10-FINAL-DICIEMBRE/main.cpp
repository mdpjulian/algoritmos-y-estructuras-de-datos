#include <iostream>
#include "figura.h"
#include "circulo.h"
#include "cuadrado.h"

using namespace std;

int main(){
	int op, pos=0;
	const int max = 3;
	Figura *pFigura[max];

	do{

	cout << "1-Crear Circulo" << endl;
	cout << "2-Crear Cuadrado" << endl;
	cout << "3-Recorrer figuras mostrando Area y Perimetro" << endl;
	cout << "0-Finalizar programa" << endl;
	cin >> op;

	switch(op){
			case 1:
			if(pos <=2){
				float rad;
				cout << "Ingrese el radio del circulo: " << endl;
				cin >> rad;
				pFigura[pos] = new Circulo(rad);
				pos++;
			}else{
				cout << "Limite de figuras alcanzado!.." << endl;
			}
				break;
			
			case 2:
			if(pos <=2){
				float lad;
				cout << "Ingrese el largo del cuadrado: " << endl;
				cin >> lad;
				pFigura[pos] = new Cuadrado(lad);
				pos++;
			}else{
				cout << "Limite de figuras alcanzado!.." << endl;
			}
				break;
			case 3:
			if(pos >=3){
				for(int i=0; i< 3; i++){
					cout << "Figura " << i << ": " << endl;
					cout << "Perimetro: " << pFigura[i]->Perimetro() << endl;
					cout << "Area: " << pFigura[i]->Area() << endl;
				}
				break;
			}else {
				cout << "Primero complete 3 figuras!" << endl;
				break;
			}
			case 0:
				cout << "programa finalizado..";
				break;
			default:
			cout << "opcion incorrecta" << endl;
	}

	}while (op != 0);
	for(int i=0; i < 3; i++){
		delete pFigura[i];
	}

	
return 0;
}