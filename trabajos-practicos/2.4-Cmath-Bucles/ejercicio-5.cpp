#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int i = 1, n = 0, suma = 0;
    while (n <= 0){
        cout << "cuantos numeros queres sumar?";
        cin >> n;
    }
    while (i <= n){
        suma = suma + i;
        i++;
    }
    cout << "sumatorio de i(1 a " << n << ")" << suma << endl;

return 0;
}