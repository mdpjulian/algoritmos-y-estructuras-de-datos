#include <iostream>
using namespace std;


int main()
{

	int salario, aumento;

	cout << "Ingrese su salario: " << endl;
	cin >> salario;


	if (salario <= 9000){
		aumento = salario * 0.20 + salario;
	}if (salario > 9000 & salario < 15000){
		aumento = salario * 0.10 + salario;
	}if (salario > 15000 &  salario <= 20000){
		aumento = salario * 0.05 + salario;
	}if (salario > 20000){
		aumento = salario * 0.03 + salario;}

	cout << "Su salario nuevo es: " << aumento << endl;

return 0;

}