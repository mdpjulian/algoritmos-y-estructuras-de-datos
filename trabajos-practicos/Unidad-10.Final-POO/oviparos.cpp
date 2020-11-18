#include <iostream>
#include "oviparos.h"

//Crocodile
Crocodile::Crocodile(){}
Crocodile::~Crocodile(){}
void Crocodile::eat(){
	std::cout << "El cocodrilo esta comiendo!.." << std::endl;
}
void Crocodile::sleep(){
	std::cout << "El cocodrilo esta durmiendo.." << std::endl;
}

//Goose
Goose::Goose(){}
Goose::~Goose(){}
void Goose::eat(){
	std::cout << "El ganso esta comiendo!.." << std::endl;
}
void Goose::sleep(){
	std::cout << "El ganso esta durmiendo!.." << std::endl;
}

//Pelican
Pelican::Pelican(){}
Pelican::~Pelican(){}
void Pelican::eat(){
	std::cout << "El pelicano esta comiendo!.." << std::endl;
}
void Pelican::sleep(){
	std::cout << "El pelicano esta durmiendo!.." << std::endl;
}



