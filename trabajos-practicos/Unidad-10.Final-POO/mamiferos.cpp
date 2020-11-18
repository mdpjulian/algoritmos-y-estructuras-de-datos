#include <iostream>
#include "mamiferos.h"

//Bat
Bat::Bat(){}
Bat::~Bat(){}
void Bat::eat(){
	std::cout << "El murcielago esta comiendo!.." << std::endl;
}
void Bat::sleep(){
	std::cout << "El murcielago esta durmiendo!.." << std::endl;
}
//Whale
Whale::Whale(){}
Whale::~Whale(){}
void Whale::eat(){
	std::cout << "La ballena esta comiendo!.." << std::endl;
}
void Whale::sleep(){
	std::cout << "La ballena esta durmiendo!.." << std::endl;
}
//SeaLion
SeaLion::SeaLion(){}
SeaLion::~SeaLion(){}
void SeaLion::eat(){
	std::cout << "El lobo marino esta comiendo!.." << std::endl;
}
void SeaLion::sleep(){
	std::cout << "El lobo marino esta durmiendo!.." << std::endl;
}