#include <iostream>
using namespace std;

int main()
{
	 int s= 0, m= 0, h= 0;
    cout << "ingresa un tiempo en segundos: " << endl;
    cin >> s ;
    while (s >= 60){
        s = s - 60;
        m = m +1;
    }
       while (m >= 60){
        m = m - 60;
        h = h +1;
    }
    cout << "tiempo transcurrido: " << h << "(hora/s):" << m << "(minuto/s):" << s << "(segundo/s) transcurridos"  << endl;

return 0;
}