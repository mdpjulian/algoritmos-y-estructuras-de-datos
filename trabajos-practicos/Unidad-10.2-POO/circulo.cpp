#include <iostream>
#include "circulo.h"


Circulo::Circulo(){
	radio = 3.45;
}
Circulo::~Circulo(){
	//destructor
}
Circulo::Circulo(float rad){
	this->radio = rad;
}
void Circulo::Dibujar(){
	std::cout << "Dibujando Circulo ( ) ( ) ... con radio= " << radio << std::endl;
}
void Circulo::Borrar(){
		std::cout << "Borrando Circulo..." << std::endl;
}
void Circulo::SetRadio(float rad){
	this->radio = rad;
}
float Circulo::GetRadio(){
	return this->radio;
}
