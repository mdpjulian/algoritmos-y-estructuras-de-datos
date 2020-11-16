#include <iostream>

using namespace std;
const int MAX = 10;
typedef int Array[MAX];

int main(){
	int aux=9999;
	int *p, *pAux= &aux;
	Array vectorMenor={85,42,7,9,11,5,63,72,81,29};
	for(int i=9; i>=0; i--){
		p=&vectorMenor[i];
		if(*p<*pAux){
			*pAux= *p;
		}
	}
	cout << "El menor valor del vector es: " << *pAux << endl;
return 0;
}