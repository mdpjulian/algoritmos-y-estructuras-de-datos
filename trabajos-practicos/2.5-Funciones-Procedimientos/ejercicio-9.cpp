#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>


void duplicar (int a, int b);
int main()
{
	int a, b;
	a = 5;
	b = 3;
	cout << "El valor de A antes es: " << a << ". El valor de B antes es: " << b << endl;
	duplicar(a,b);
	cout << "El valor de A luego es: " << a << ". El valor de B luego es: " << b << endl;

return 0;
}
void duplicar(int a, int b){
	a = a * 2;
	b = b * 2;

	cout << "El valor de A duplicado es: " << a << ". El valor de B duplicado es: " << b << endl;
}