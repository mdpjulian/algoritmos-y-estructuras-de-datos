#include <iostream>
#include "rectangulo.h"

Rectangulo::Rectangulo(){
	//constructor
}
Rectangulo::~Rectangulo(){
	//destructor
}
void Rectangulo::Dibujar(){
	std::cout << "Dibujando Rectangulo |__| |__|..." << std::endl;
}
void Rectangulo::Borrar(){
		std::cout << "Borrando Rectangulo..." << std::endl;
}
