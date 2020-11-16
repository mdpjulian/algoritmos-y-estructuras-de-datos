#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{
	public:
		Rectangulo();
		Rectangulo(float base, float alt);
		void SetAltura(float alt);
		float GetAltura();
		void SetBase(float base);
		float GetBase();
		float area();
		float perimetro();

	private:
		float altura;
		float base;

};
#endif // RECTANGULO_H