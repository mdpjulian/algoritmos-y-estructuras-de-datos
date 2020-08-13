#include <iostream>
using namespace std;

int main()
{
	int actual, nacimiento, resultado;
	actual = 2020;
	cout << "ingresa tu año de nacimiento:" << endl;
	cin >> nacimiento;
	resultado = actual - nacimiento;
	cout << "Tu edad es: " << resultado << endl;

return 0;
}