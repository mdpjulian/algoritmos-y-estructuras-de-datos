#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>


void tiempo (int totalSeg);
int main()
{
	int totalSeg;
	cout << "Ingrese una cantidad de segundos: " << endl;
	cin >> totalSeg;
	tiempo(totalSeg);
return 0;
}
void tiempo(int totalSeg){
	int s= totalSeg, m=0, h=0;
	while(s >= 60){
		s = s - 60;
		m = m + 1;
	}
	while(m >= 60){
		m = m - 60;
		h = h + 1;
	}

	cout << "tiempo transcurrido: " << h << "(hora/s): " << m << "(minuto/s): " << s << "(segundo/s) transcurridos" << endl;

}