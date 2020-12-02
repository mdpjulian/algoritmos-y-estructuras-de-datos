#ifndef CUADRADO_H
#define CUADRADO_H
#include "figura.h"


class Cuadrado : public Figura{
	public:
		Cuadrado(float x);
		~Cuadrado();
		float Perimetro();
		float Area();
		
	private:
		float lado;

};



#endif // CUADRADO_H