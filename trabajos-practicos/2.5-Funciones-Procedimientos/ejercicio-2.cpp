#include <iostream>
using namespace std;
#include <cmath>

int al_cuadrado (int x){
    return (pow(x,2) );
}
int main()
{
    int resul, a;
    cout << "Ingrese 1 numero: " << endl;
    cin >> a;
    resul = al_cuadrado(a);
    cout << "El resultado es : " << resul << endl;
    
return 0;
}