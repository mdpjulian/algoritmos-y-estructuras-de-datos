#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>


void cambio (double pesos);
int main()
{
	double pesos;
	cout << "Ingrese la cantidad de pesos disponibles para convertirlos a dolares: " << endl;
	cin >> pesos;
	cambio(pesos);
return 0;
}
void cambio (double pesos){
	double dolar; 
	dolar = pesos * 0.014;
	cout << "Dolares disponibles " << dolar;
}