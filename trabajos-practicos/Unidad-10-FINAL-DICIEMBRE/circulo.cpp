#include <iostream>
#include "circulo.h"

using namespace std;

Circulo::Circulo(float x){
	this->radio = x;
}
Circulo::~Circulo(){}
float Circulo::Perimetro(){
	return (2 * (3.14 * this->radio));
}
float Circulo::Area(){
	return 3.14 * (this->radio * this->radio);
}