#include <iostream>
#include <stdlib.h>
using namespace std;

string Fcodigo();
string Frazonsocial();
string Fsolicitud();
string Fentrega();


int main()
{
    string codigo, razonsocial, solicitud, entrega;

    razonsocial = Frazonsocial();
    solicitud = Fsolicitud();
    entrega = Fentrega();
    codigo = Fcodigo();


    system ("CLS");

   cout << "---------------------PEDIDO PARA MAYORISTA-----------------------------" << endl;
   cout << "CODIGO/PRODUCTO A SOLICITAR:   " << codigo << "    RAZON SOCIAL:    " << razonsocial << endl;
   cout << "FECHA DE SOLICTUD:    " << solicitud << endl;
   cout << "FECHA DE ENTREGA:    " << entrega << endl;
   cout << "-----------------------------------------------------------------------------------------------------------" << endl;


return 0;

}
string Fcodigo(){
    int opcion;
    string codigo;
    cout << "Ingrese el codigo provedor(1-6): " << endl;
    cout << "1-Bananas" << endl;
    cout << "2-Naranjas" << endl;
    cout << "3-Mandarinas" << endl;
    cout << "4-Remolachas" << endl;
    cout << "5-Frutillas" << endl;
    cout << "6-Duraznos" << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            codigo = "Bananas";
            break;
        case 2:
            codigo = "Naranjas";
            break;
        case 3:
            codigo = "Mandarinas";
            break;
        case 4:
            codigo = "Remolachas";
            break;
        case 5:
            codigo = "Frutillas";
            break;
        case 6:
            codigo = "Duraznos";
            break;
        default:
            cout << "Ingreso un codigo incorrecto, vuelva a ingresar!" << endl;
            Fcodigo();
            break;
        return codigo;
    }

}
string Frazonsocial(){
    string razon;
    cout << "Ingrese su razon social: ";
    getline(cin, razon);
return razon;
}
string Fsolicitud(){
    string solicitud;
    cout << "Ingrese su fecha de solicitud: ";
    getline(cin, solicitud);
return solicitud;
}
string Fentrega(){
    string entrega;
    cout << "Ingrese su fecha de entrega: ";
    getline(cin, entrega);
return entrega;
}