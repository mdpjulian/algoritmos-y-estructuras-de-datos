#include <iostream>
using namespace std;
#include <cmath>

int mult (int a, int b){
    return (a * b);
}
int main()
{
    int resul, a, b;
    cout << "Ingrese 2 numeros: " << endl;
    cin >> a >> b;
    resul = mult(a, b);
    cout << "El resultado es : " << resul << endl;
    
return 0;
}