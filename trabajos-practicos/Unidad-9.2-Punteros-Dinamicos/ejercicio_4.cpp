#include <iostream>

using namespace std;

int main(){
	string frase;
	string *p;
	int i, vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;
	cout << "Ingrese su frase: " << endl;
	getline(cin, frase);
	p = &frase;

	for (i=0; i<frase.size(); i++){
		switch(p->at(i)){
			case 'a': 
				vocal_a++;
				break;
			case 'e': 
				vocal_e++;
				break;
			case 'i': 
				vocal_i++;
				break;
			case 'o': 
				vocal_o++;
				break;
			case 'u': 
				vocal_u++;
				break;
			default:
				break;
		}
	}
	cout << "Su frase: <" << frase << "> contiene: " << endl;
	cout << "Vocales A: " << vocal_a << endl;
	cout << "Vocales E: " << vocal_e << endl;
	cout << "Vocales I: " << vocal_i << endl;
	cout << "Vocales O: " << vocal_o << endl;
	cout << "Vocales U: " << vocal_u << endl;
return 0;
}