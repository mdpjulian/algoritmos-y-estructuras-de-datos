#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int i = 1, n = 0, par = 0, inpar = 0;

    while (n <= 0){
        cout << "hasta que numero quiere sumar?";
        cin >> n;
    }
    while (i <= n){
        if(i % 2 == 0){
            par = par + i;
            i++;
        }
        else{
            inpar = inpar + i;
            i++;
        }
    }

    cout << "La suma de los numeros pares es: " << par << endl;
    cout << "La suma de los numeros inpares es: " << inpar << endl;

return 0;
}