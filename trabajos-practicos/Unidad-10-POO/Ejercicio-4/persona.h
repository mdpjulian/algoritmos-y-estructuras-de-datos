#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona
{
public:
	Persona(string nom, int d, int m, int a, int dA, int mA, int aA);
	void SetNombre(string nom);
	string GetNombre();
	void SetDia(int dia);
	int GetDia();
	void SetMes(int mes);
	int GetMes();
	void SetAnnio(int a);
	int GetAnnio();
	int obtenerEdad();
	void SetDiaAct(int dA);
	int GetDiaAct();
	void SetMesAct(int mA);
	int GetMesAct();
	void SetAnnioAct(int aA);
	int GetAnnioAct();

private:
	string nombre;
	int dia;
	int mes;
	int annio;
	int diaAct;
	int mesAct;
	int anioAct;
};
#endif // PERSONA_H