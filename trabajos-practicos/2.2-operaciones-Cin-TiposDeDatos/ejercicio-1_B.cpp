#include <iostream>
using namespace std;

int main()
{
	int numero1, numero2, numero3;
	double promedio;
	cout << "ingresa tres numeros para obtener el promedio" << endl;
	cin >> numero1;
	cin >> numero2;
	cin >> numero3;
	promedio = (numero1 + numero2 + numero3) / 3;
	cout << "El promedio da:" << promedio << endl;
return 0;
}