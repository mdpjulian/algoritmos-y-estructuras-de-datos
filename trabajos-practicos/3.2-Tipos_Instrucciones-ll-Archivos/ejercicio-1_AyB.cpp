#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;



int main()
{
  // --------------EJERCICIO 1 A---------------------
   string frase;
   int contador= 0;
   ofstream archivo;

   archivo.open("frasesDeBjarne.txt");

   cout << "INGRESE UNA FRASE(fin para terminar): ";
   getline(cin, frase);
   contador++;

   while (frase != "fin"){

    archivo << frase << endl;
    cout << "INGRESE UNA FRASE(fin para terminar): ";
    getline(cin, frase);
    contador++;  // Agrego 1 cada vez que se ingresa una frase
   }
   contador--;  // Elimino la frase "fin" del contador
   cout << "-----------------------------------" <<endl;
   archivo.close();
  
  
  		// ----------------EJERCICIO 1 B--------------------------
  
        int num = contador;   // num muestra frases totales ingresadas
       	ifstream archivoLectura;
       	archivoLectura.open("frasesDeBjarne.txt");
        	getline(archivoLectura, frase);
        	cout << frase << endl;
       		contador--;

            while(contador >0){
                getline(archivoLectura, frase);
                cout << frase << endl;
                contador--;
            }
            	cout << "Lista de frases(" << num << ")finalizada!";


return 0;

   }