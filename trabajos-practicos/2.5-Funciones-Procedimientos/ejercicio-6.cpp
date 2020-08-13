#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>


void intercambio (int a, int b);
int main()
{
    int num1, num2;
    cout << "Ingrese dos numeros: " << endl;
    cin >> num1 >> num2;
    cout << "El primer numero es: " << num1 << ". El segundo numero es: " << num2 << endl;
    intercambio(num1, num2);

return 0;
}
void intercambio(int num1, int num2){
	int aux;
	aux = num1;
	num1 = num2;
	num2 = aux;
	cout << "El primer numero ahora es: " << num1 << ". EL segundo numero ahora es: " << num2;
}