#include <iostream>
using namespace std;


int main()
{
	float f1, f2, f3, cm, cl, lb, far, kg, pul;
	cout << "Ingrese los centimetros:" << endl;
	cin >> cm;
	cout << "Ingrese los grados Celsius:" << endl;
	cin >> cl;
	cout << "Ingrese las libras:" << endl;
	cin >> lb;
	f1 = cm * 0.39;
	f2 = (cl * (9 / 5)) + 32;
	f3 = lb * 0.45;
	cout << "Centimetros a pulgadas: " << f1 << endl;
	cout << "Celsius a Fahrenheit: " << f2 << endl;
	cout << "Libras a Kilos: " << f3 << endl;

return 0;

}