#include <iostream>
#include <stdlib.h>
using namespace std;

string numMozo();
string numMesa();
string mostrarFecha();
string mostrarHora();
string platoEntrada();
string platoPrincipal();
string platoPostre();
string mostrarComanda();



int main()
{
    string mozo, mesa, fecha, hora, entrada, principal, postre;
    mozo = numMozo();
    mesa = numMesa();
    fecha = mostrarFecha();
    hora = mostrarHora();
    entrada = platoEntrada();
    principal = platoPrincipal();
    postre = platoPostre();

    system ("CLS");

    cout << "----------- COMANDA ----------" << endl;
    cout << "Mozo:" << mozo << "    -------/--------    " << "Numero de Mesa: " << mesa << endl;
    cout << "Fecha:     " << fecha << "    -------/--------    " << "Hora:     " << hora << endl;
    cout << "Plato de Entrada:     " << entrada << endl;
    cout << "Plato Principal:     " << principal << endl;
    cout << "Plato de Postre:     " << postre << endl;




return 0;

}

string numMozo(){
    typedef enum { Juan, Pedro, Julieta, Natalia} tMozos;
    int opcion;
    string mozo;
    cout << "Ingrese codigo del mozo: ";
    cin >> opcion;
    switch(opcion){
    case 1:
        mozo = "Juan";
        break;
    case 2:
        mozo = "Pedro";
        break;
    case 3:
        mozo = "Julieta";
        break;
    case 4:
        mozo = "Natalia";
        break;
    default:
        cout << "Codigo incorrecto. Ingrese valor entre 1 y 4!" << endl;
        numMozo();
        break;
    }
return mozo;
}
string numMesa(){
    typedef enum { Mesa1, Mesa2, Mesa3, Mesa4} tMesa;
    int opcion;
    string mesa;
    cout << "Ingrese numero de Mesa: ";
    cin >> opcion;
    switch(opcion){
    case 1:
        mesa = "Mesa1";
        break;
    case 2:
        mesa = "Mesa2";
        break;
    case 3:
        mesa = "Mesa3";
        break;
    case 4:
        mesa = "Mesa4";
        break;
    default:
        cout << "Codigo incorrecto. Ingrese valor entre 1 y 4!" << endl;
        numMesa();
        break;
    }
return mesa;
}
string mostrarFecha(){
    string fecha;
    cout << "Ingresar la fecha: ";
    cin >> fecha;
return fecha;
}
string mostrarHora(){
    string hora;
    cout << "Ingresar la hora actual: ";
    cin >> hora;
return hora;
}

string platoEntrada(){
    system ("CLS");
    int opcion;
    string entrada;
    cout << "Elija el plato de entrada" << endl;
    cout << "1-Rabas a la milanesa" << endl;
    cout << "2-Chipa" << endl;
    cout << "3-Croquetas de pescado" << endl;
    cout << "4-Empanadas" << endl;

    cin >> opcion;
    switch(opcion){
    case 1:
        entrada = "Rabas a la milanesa";
        break;
    case 2:
        entrada = "Chipa";
        break;
    case 3:
        entrada = "Croquetas de pescado";
        break;
    case 4:
        entrada = "Empanadas";
        break;
    default:
        cout << "Codigo incorrecto. Ingrese valor entre 1 y 4!" << endl;
        platoEntrada();
        break;
    }
return entrada;
}
string platoPrincipal(){
    system ("CLS");
    int opcion;
    string principal;
    cout << "Elija el plato principal" << endl;
    cout << "1-Asado" << endl;
    cout << "2-Locro" << endl;
    cout << "3-Milanesas" << endl;
    cout << "4-Sorrentinos" << endl;

    cin >> opcion;
    switch(opcion){
    case 1:
        principal = "Asado";
        break;
    case 2:
        principal = "Locro";
        break;
    case 3:
        principal = "Milanesas";
        break;
    case 4:
        principal = "Sorrentinos";
        break;
    default:
        cout << "Codigo incorrecto. Ingrese valor entre 1 y 4!" << endl;
        platoPrincipal();
        break;
    }
return principal;
}
string platoPostre(){
    system ("CLS");
    int opcion;
    string postre;
    cout << "Elija el postre" << endl;
    cout << "1-Torta" << endl;
    cout << "2-Helado" << endl;
    cout << "3-Flan" << endl;
    cout << "4-Panqueques con dulce de leche" << endl;

    cin >> opcion;
    switch(opcion){
    case 1:
        postre = "Torta";
        break;
    case 2:
        postre = "Helado";
        break;
    case 3:
        postre = "Flan";
        break;
    case 4:
        postre = "Panqueques";
        break;
    default:
        cout << "Codigo incorrecto. Ingrese valor entre 1 y 4!" << endl;
        platoPostre();
        break;
    }
return postre;
}
