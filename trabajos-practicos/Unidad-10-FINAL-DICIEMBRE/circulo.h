#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura.h"


class Circulo : public Figura{
	public:
		Circulo(float x);
		~Circulo();
		float Perimetro();
		float Area();
		
	private:
		float radio;

};


#endif // CIRCULO_H