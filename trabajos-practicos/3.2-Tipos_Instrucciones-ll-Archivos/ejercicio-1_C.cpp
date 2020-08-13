#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;



int main()
{
  ifstream archivo("frasesDeBjarne.txt");
  int palabras = 0, renglones = 0;
  string frase, renglon;

        while(getline(archivo, renglon)){
            ++renglones;

            stringstream ss(renglon);


        while(ss >> frase){
            ++palabras;
        }
        }
        int promedio = palabras / renglones;

        cout << "palabras: " << palabras << endl;
        cout << "el promedio es " << promedio;
return 0;

   }