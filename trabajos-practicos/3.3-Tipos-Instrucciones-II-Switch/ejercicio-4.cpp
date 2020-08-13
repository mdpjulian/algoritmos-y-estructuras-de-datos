#include <iostream>
using namespace std;


int main()
{
	int x, y, i, resta;
	resta = x - y;

	cout << "Ingresa dos numeros para restar" << endl;
	cin >> x >> y;

	i = x;
	if (resta <= 10){
		i = i + 1;
		cout << "Numeros comprendidos dentro de x e y: " << endl;
		while (i < y){
			cout << i << endl;
			i++;
		}
	}

return 0;

}