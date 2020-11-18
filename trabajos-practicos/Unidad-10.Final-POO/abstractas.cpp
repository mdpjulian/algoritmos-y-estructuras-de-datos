#include <iostream>
#include "abstractas.h"


//Animal
void Animal::eat(){}
void Animal::sleep(){}
void Animal::breed(){
	switch(code){
		case 1:
		case 2:
		case 3:
			Oviparous *pOviparous;
			pOviparous->layEggs();
			break;
		case 4:
		case 5:
		case 6:
			Mammal *pMammel;
			pMammel->nurse();
			break;
		default:
		break;
	}
}
void Animal::SetName(){
	std::cout << "Ingresa el nombre para el animal: " << std::endl;
	std::cin>>name;
	std::cin.sync();
}
void Animal::GetName(){
	 std::cout << name;
}
void Animal::SetCode(int c){
	this->code = c;
}
void Animal::GetAnimalType(){

	switch(code){
		case 1:
			std::cout << "Tipo: cocodrilo. Nombre: ";
			break;
		case 2:
			std::cout << "Tipo: ganso. Nombre: ";
			break;
		case 3:
			std::cout << "Tipo: pelicano. Nombre: ";
			break;
		case 4:
			std::cout << "Tipo: murcielago. Nombre: ";
			break;
		case 5:
			std::cout << "Tipo: ballena. Nombre: ";
			break;
		case 6:
			std::cout << "Tipo: leon marino. Nombre: ";
			break;
		default:
		break;
	}
}
//Oviparous
void Oviparous::layEggs(){
	std::cout << "acaba de poner un huevo!.." << std::endl;
}
//Mammal
void Mammal::nurse(){
	std::cout << "esta embarazada!.." << std::endl;
}