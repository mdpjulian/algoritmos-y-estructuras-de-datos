#include <iostream>
#include "cuadrado.h"

using namespace std;

Cuadrado::Cuadrado(float x){
	this->lado = x;
}
Cuadrado::~Cuadrado(){}
float Cuadrado::Perimetro(){
	return this->lado * 4;
}
float Cuadrado::Area(){
	return this->lado * this->lado;
}
