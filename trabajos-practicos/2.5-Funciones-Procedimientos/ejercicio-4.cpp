#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int al_cuadrado (int x){
    return (pow(x,2) );
}
int main()
{
    double numero, partefrac, parteint;
    cout << "Ingrese 1 numero: " << endl;
    cin >> numero;
    partefrac = modf (numero, &parteint);
    cout << "La parte fraccionaria es: " << partefrac << endl;
    
    
return 0;
}