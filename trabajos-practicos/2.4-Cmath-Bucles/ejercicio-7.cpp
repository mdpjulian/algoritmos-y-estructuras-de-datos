#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int n1 = 0, n2 = 0;
    cout << "Ingrese dos numeros enteros: " << endl;
    cin >> n1;
    cin >> n2;
    while (n2 >= n1){
        cout << "Ingrese un numero menor al primero! " << endl;
        cin >> n2;
    }
    cout << "Primer numero: " << n1 << endl;
    cout << "Segundo numero: " << n2 << endl;

return 0;
}