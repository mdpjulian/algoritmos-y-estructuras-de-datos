#ifndef FIGURA_H
#define FIGURA_H

class Figura{
	public:
		Figura();
		~Figura();
		virtual float Perimetro() =0;
		virtual float Area() =0;

	private:
		float x;
};


#endif // FIGURA_H