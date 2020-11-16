#include "persona.h"

Persona::Persona(string nom, int d, int m, int a, int dA, int mA, int aA)
{
	this->nombre = nom;
	this->dia = d;
	this->mes = m;
	this->annio = a;
	this->diaAct = dA;
	this->mesAct = mA;
	this->anioAct = aA;
}
void Persona::SetNombre(string nom)
{
	nombre = nom;
}
string Persona::GetNombre()
{
	return nombre;
}
void Persona::SetDia(int dia)
{
	dia = dia;
}
int Persona::GetDia()
{
	return dia;
}
void Persona::SetMes(int mes)
{
	mes = mes;
}
int Persona::GetMes()
{
	return mes;
}
void Persona::SetAnnio(int a)
{
	annio = a;
}
int Persona::GetAnnio()
{
	return annio;
}
int Persona::obtenerEdad()
{
	int result = this->anioAct - this->annio;
	return result;
}
void Persona::SetDiaAct(int dA)
{
	diaAct = dA;
}
int Persona::GetDiaAct()
{
	return diaAct;
}
void Persona::SetMesAct(int mA)
{
	mesAct = mA;
}
int Persona::GetMesAct()
{
	return mesAct;
}
void Persona::SetAnnioAct(int aA)
{
	anioAct = aA;
}
int Persona::GetAnnioAct()
{
	return anioAct;
}
