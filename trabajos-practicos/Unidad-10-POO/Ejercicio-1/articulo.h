#ifndef ARTICULO_H
#define ARTICULO_H

class Articulo
{
	private:
		float costoBase;
	public:
		Articulo();
		Articulo(float valor);
		void SetCostoBase(float valor);
		float GetCostoBase();
		float PVPMayor();
		float PVPDetal();

};
#endif // ARTICULO_H