#include <iostream>
#include <stdlib.h>
using namespace std;

string Fproducto();
string Fenvio();


int main()
{
    string producto, envio;
	
	producto = Fproducto();
    envio = Fenvio();

	 system ("CLS");

   cout << "---------------------PEDIDO PARA MAYORISTA-----------------------------" << endl;
   cout << "PRODUCTO A SOLICITAR:   " << producto << endl;
   cout << "TIPO DE ENVIO:    " << envio << endl;
   cout << "-----------------------------------------------------------------------------------------------------------" << endl;


return 0;

}
string Fproducto(){
    int opcion;
    string codigo;
    cout << "Elija uno de los productos: " << endl;
    cout << "1-Simple" << endl;
    cout << "2-Medio" << endl;
    cout << "3-Calidad" << endl;
    cout << "4-Premium" << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            codigo = "Simple";
            break;
        case 2:
            codigo = "Medio";
            break;
        case 3:
            codigo = "Calidad";
            break;
        case 4:
            codigo = "Premium";
            break;
        default:
            cout << "Ingreso un codigo incorrecto, vuelva a ingresar!" << endl;
            Fproducto();
            break;
        return codigo;
    }

}
string Fenvio(){
    int opcion;
    string codigo;
    cout << "Elija el tipo de envio: " << endl;
    cout << "1-Normal" << endl;
    cout << "2-Express" << endl;
    cout << "3-Fast Delivery" << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            codigo = "Normal";
            break;
        case 2:
            codigo = "Express";
            break;
        case 3:
            codigo = "Fast Delivery";
            break;
        default:
            cout << "Ingreso un codigo incorrecto, vuelva a ingresar!" << endl;
            Fenvio();
            break;
        return codigo;
    }
}


