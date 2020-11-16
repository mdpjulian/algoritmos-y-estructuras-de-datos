#include "articulo.h"

Articulo::Articulo(){
    costoBase = 20.0;
}
Articulo::Articulo(float valor){
	costoBase = valor;
}
float Articulo::GetCostoBase(){
	return this->costoBase; 
}
void Articulo::SetCostoBase(float valor){
	this->costoBase = valor;
}
float Articulo::PVPMayor(){
	float pvptotal= this->costoBase + this->costoBase * 0.15;
	return pvptotal;
}
float Articulo::PVPDetal(){
	float pvptotal= this->costoBase + this->costoBase * 0.30;
	return pvptotal;
}