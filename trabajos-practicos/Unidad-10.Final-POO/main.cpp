#include <iostream>
#include "abstractas.h"
#include "oviparos.h"
#include "mamiferos.h"

using namespace std;

int main(){
	int op, pos=0;
	const int MAX = 5;
	Animal *pArray[MAX];

	do{

		cout << "1-Agregar animal al zoologico" << endl;
		cout << "2-Darle de comer" << endl;
		cout << "3-Dormirlo" << endl;
		cout << "4-Reproducir" << endl;
		cout << "0-Finalizar" << endl;
		cout << endl;
		cout << "Ingresa numero: ";
		cin >> op;


		switch(op){
					case 1:
					if(pos<5){
						cout << "Eleji el animal que queres agregar: " << endl;
						cout << "1- Cocodrilo" << endl;
						cout << "2- Ganso" << endl;
						cout << "3- Pelicano" << endl;
						cout << "4- Murcielago" << endl;
						cout << "5- Ballena" << endl;
						cout << "6- Leon Marino" << endl;
						cin >> op;

				
						switch(op){
							case 1:
								pArray[pos] =  new Crocodile();
								pArray[pos]-> SetName();
								pArray[pos]-> SetCode(op);
								pos++;
								break;
							case 2:
								pArray[pos] =  new Goose();
								pArray[pos]->SetName();
								pArray[pos]->SetCode(op);
								pos++;
								break;
							case 3:
								pArray[pos] =  new Pelican();
								pArray[pos]->SetName();
								pArray[pos]->SetCode(op);
								pos++;
								break;
							case 4:
								pArray[pos] =  new Bat();
								pArray[pos]->SetName();
								pArray[pos]->SetCode(op);
								pos++;
								break;
							case 5:
								pArray[pos] =  new Whale();
								pArray[pos]->SetName();
								pArray[pos]->SetCode(op);
								pos++;
								break;
							case 6:
								pArray[pos] =  new SeaLion();
								pArray[pos]->SetName();
								pArray[pos]->SetCode(op);
								pos++;
								break;
							default:
								break;
						}}else cout << "El zoologico esta lleno de animales ya!" << endl;
						break;
					case 2:
						for(int i=0; i < pos; i++){
							pArray[i]->GetAnimalType();
							pArray[i]->GetName();
							cout << endl;
							pArray[i]->eat();
						}
						cout << endl;
						break;
					case 3:
						for(int i=0; i < pos; i++){
							pArray[i]->GetAnimalType();
							pArray[i]->GetName();
							cout << endl;
							pArray[i]->sleep();
						}
						cout << endl;
						break;
					case 4:
						for(int i=0; i< pos; i++){
							pArray[i]->GetName();
							cout << " ";
							pArray[i]->breed();
						}
						cout << endl;
						break;
					case 0:
						cout << "Programa finalizado!..";
						break;
					default:
						cout << "Opcion incorrecta, ingrese nuevamente!" << endl;
					break;
		}
	}while (op != 0);
	
	for(int i=0; i < MAX; i++){
		delete pArray[i];
	}
	cin.sync();

return 0;	
}
