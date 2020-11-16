#include <iostream>
#include "figura.h"


Figura::Figura(){
	//constructor
}
Figura::~Figura(){
	//destructor
}
void Figura::Dibujar(){
	std::cout << "Dibujando figura..." << std::endl;
}
void Figura::Borrar(){
	std::cout << "Borrando figura..." << std::endl;
}
void Figura::Rotar(){
	std::cout << "Rotando figura..." << std::endl;
}
void Figura::Mover(){
	std::cout << "Moviendo figura..." << std::endl;
}

