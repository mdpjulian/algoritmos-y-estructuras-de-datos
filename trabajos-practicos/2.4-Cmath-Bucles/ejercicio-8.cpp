#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int n = 0, suma = 0;
    while (n <= 0){
        cout << "ingrese numeros para sumar(numero negativo para finalizar: " << endl;
        cin >> n;
    }
    while (n >= 0){
        suma = suma + n;
        cin >> n;
    }
    cout << "La suma de los numeros es : " << suma << endl;
return 0;
}