#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int promedio, n1, n2, n3;

    cout << "ingrese sus 3 notas: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3;

    if (promedio>=4){
        cout << "Aprobo";
    }
    else {
        cout << "Desaprobo";
    }


return 0;
}