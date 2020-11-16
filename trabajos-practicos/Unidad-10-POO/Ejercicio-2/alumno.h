#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
using namespace std;

class Alumno
{
	public:
		Alumno();
		Alumno(string xcedula, string xnombre, float x1, float x2, float x3);
		void SetCedula(string ced);
		string GetCedula();
		void SetNombre(string nom);
		string GetNombre();
		void SetNota1(float n1);
		float GetNota1();
		void SetNota2(float n2);
		float GetNota2();
		void SetNota3(float n3);
		float GetNota3();
		string NotaFinal();

	private:
		string cedula;
		string nombre;
		float nota1;
		float nota2;
		float nota3;

};
#endif // ALUMNO_H