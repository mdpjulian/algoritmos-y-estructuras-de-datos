#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;



int main()
{
    ifstream archivo("frasesDeBjarne.txt");
    string palabra, larga;

        while (archivo >> palabra){
            if(palabra.length() > larga.length()){
                larga = palabra;
            }
        }
        archivo.close();
        cout << "La palabra mas larga es: " << larga << endl;
return 0;
}