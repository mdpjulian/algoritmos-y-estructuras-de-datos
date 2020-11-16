#include <iostream>
#include "triangulo.h"

Triangulo::Triangulo(){
	//constructor
}
Triangulo::~Triangulo(){
	//destructor
}
void Triangulo::Dibujar(){
	std::cout << "Dibujando Triangulo /| /|..." << std::endl;
}
void Triangulo::Borrar(){
		std::cout << "Borrando Triangulo..." << std::endl;
}
