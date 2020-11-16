#ifndef CIRCULO_H
#define CIRCULO_H

#include "figura.h"

class Circulo : public Figura{

	public:
		Circulo();
		Circulo(float rad);
		virtual void Dibujar();
		virtual void Borrar();
		void SetRadio(float rad);
		float GetRadio();

	private:
		float radio;
};


#endif // CIRCULO_H