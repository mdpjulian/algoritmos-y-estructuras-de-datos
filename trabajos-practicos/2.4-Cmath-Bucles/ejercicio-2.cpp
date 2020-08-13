#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int salario, horas, pago;

    cout << "cuantas horas semanales trabajo?:";
    cin >> horas;
    if (horas <= 40){
        pago = 200;
        salario= pago * 8 * 5;
        cout << "Su pago semanal(5 dias, 8 horas) es de: " << salario << endl;

    }
    if (horas > 40){
        pago = 250;
        salario= pago * 8 * 5;
        cout << "Su pago semanal(5 dias, 8 horas) es de: " << salario << endl;
        
    }

return 0;
}