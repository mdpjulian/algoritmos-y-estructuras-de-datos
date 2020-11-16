#include "alumno.h"

Alumno::Alumno()
{
}

Alumno::Alumno(string xcedula, string xnombre, float x1, float x2, float x3)
{
	this->cedula = xcedula;
	this->nombre = xnombre;
	this->nota1 = x1;
	this->nota2 = x2;
	this->nota3 = x3;
}

string Alumno::GetCedula()
{
	return cedula;
}
void Alumno::SetCedula(string ced)
{
	cedula = ced;
}
void Alumno::SetNombre(string nom)
{
	nombre = nom;
}
string Alumno::GetNombre()
{
	return nombre;
}
void Alumno::SetNota1(float n1)
{
	nota1 = n1;
}
float Alumno::GetNota1()
{
	return nota1;
}
void Alumno::SetNota2(float n2)
{
	nota2 = n2;
}
float Alumno::GetNota2()
{
	return nota2;
}
void Alumno::SetNota3(float n3)
{
	nota3 = n3;
}
float Alumno::GetNota3()
{
	return nota3;
}
string Alumno::NotaFinal()
{
	string resultado, aproDesapro;
	float nfinal = (this->nota1 + this->nota2 + this->nota3);
	if (nfinal >= 48)
	{
		aproDesapro = ". El alumno aprobo!";
	}
	else
	{
		aproDesapro = ". El alumno desaprobo!";
	}
	resultado = to_string(nfinal) + aproDesapro;
	return resultado;
}
