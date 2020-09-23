#include <iostream>

using namespace std;

int main(){

	string frase, palabra;
	int i, contadorChar=0;

	cout << "Ingrese su frase: " << endl;
	getline(cin, frase);
	frase = frase + " ";

	for (i=0; i < frase.size(); i++){
		if(frase.at(i) != ' '){
			contadorChar++;
			palabra += frase.at(i);
		}else{
			cout << palabra << "  |  " << contadorChar << " letras" << endl;
			contadorChar=0;
			palabra = "";
		}
	}
}
