#include <iostream>

using namespace std;
const int MAX = 10;
typedef int Array[MAX];

int main(){
	int *p;
	Array arreglo={0,1,2,3,4,5,6,7,8,9};
	for(int i=0; i<9; i++){
		p=&arreglo[i];
		if(*p%2 ==0){
			cout << "El numero " << *p << " es par y su posicion en memoira es " << p << endl;
		}
	}
return 0;
}