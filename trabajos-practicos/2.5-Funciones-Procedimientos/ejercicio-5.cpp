#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

template <class TIPOD>
void despligue (TIPOD valor);
int main()
{
    int a = 35;
    double b = 20.5643;
    despligue(a);
    despligue(b);

return 0;
}
template <class TIPOD>
void despligue (TIPOD valor){
	cout << "El parametro pasado es: " << valor << endl;
}