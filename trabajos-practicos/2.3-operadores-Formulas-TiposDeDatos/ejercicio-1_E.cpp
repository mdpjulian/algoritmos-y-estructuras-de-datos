#include <iostream>
using namespace std;

int main()
{
	double x1, x2, x3, x4, a1, a2, a3, a4;
	cout << "Ingresar cuatro X " << endl;
	cin >> x1 >> x2 >> x3 >> x4;
	a1 = 2 * x1 + 1;
	a2 = 2 * x2 + 1;
	a3 = 2 * x3 + 1;
	a4 = 2 * x4 + 1;
	cout << "Primera recta lineal: y = " << a1 << endl;
	cout << "Segunda recta lineal: y = " << a2 << endl;
	cout << "Tercera recta lineal: y = " << a3 << endl;
	cout << "Cuarta recta lineal: y = " << a4 << endl;


return 0;
}