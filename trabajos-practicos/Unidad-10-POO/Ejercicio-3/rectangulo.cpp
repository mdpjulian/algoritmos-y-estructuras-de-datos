#include "rectangulo.h"

Rectangulo::Rectangulo(){}
Rectangulo::Rectangulo(float base, float alt){
	this->base = base;
	this->altura = alt;
}
void Rectangulo::SetAltura(float alt){
	altura = alt;
}
float Rectangulo::GetAltura(){
	return altura;
}
void Rectangulo::SetBase(float base){
	base = base;
}
float Rectangulo::GetBase(){
	return base;
}
float Rectangulo::area(){
	float result = this->base * this->altura;
	return result;
	
}
float Rectangulo::perimetro(){
	float result = (this->base *2) + (this->altura *2);
	return result;
}