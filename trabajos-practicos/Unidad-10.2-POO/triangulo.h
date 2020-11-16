#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "figura.h"

class Triangulo : public Figura{

	public:
		Triangulo();
		virtual void Dibujar();
		virtual void Borrar();

	private:
};


#endif // TRIANGULO_H