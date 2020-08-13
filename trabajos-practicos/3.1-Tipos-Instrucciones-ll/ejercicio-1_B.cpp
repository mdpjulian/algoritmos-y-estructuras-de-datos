#include <iostream>
#include <stdlib.h>
using namespace std;

string Fnombre();
string Fapellido();
string Fdni();
string Fclase();
string FaeropuertoOrigen();
string FaeropuertoDestino();


int main()
{
    string nombre, apellido, dni, clase, aeropuertoOrigen, aeropuertoDestino;
    nombre = Fnombre();
    apellido = Fapellido();
    dni = Fdni();
    clase = Fclase();
    aeropuertoOrigen = FaeropuertoOrigen();
    aeropuertoDestino = FaeropuertoDestino();
    while (aeropuertoOrigen == aeropuertoDestino ){
            cout << "ERROR!!... Usted ingreso el mismo aeropuerto como origen y como destino. Vuelva a ingresar nuevamente los datos!";
            aeropuertoOrigen = FaeropuertoOrigen();
            aeropuertoDestino = FaeropuertoDestino();
    }


    system ("CLS");

   cout << "---------------------DATOS DEL VUELO-----------------------------" << endl;
   cout << "NOMBRE:   " << nombre << "    APELLIDO:    " << apellido << endl;
   cout << "DNI:    " << dni << endl;
   cout << "CLASE ELEJIDA:    " << clase << endl;
   cout << "AEROPUERTO ORIGEN:    " << aeropuertoOrigen << "  /  AEROPUERTO DESTINO:    " << aeropuertoDestino << endl;
   cout << "-----------------------------------------------------------------------------------------------------------" << endl;


return 0;

}
string Fnombre(){
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
return nombre;
}
string Fapellido(){
    string apellido;
    cout << "Ingrese su apellido: ";
    getline(cin, apellido);
return apellido;
}
string Fdni(){
    string dni;
    cout << "Ingrese su DNI(sin puntos): ";
    getline(cin, dni);
return dni;
}
string Fclase(){
    int opcion;
    string clase;
    cout << "Elija su Clase:" << endl;
    cout << "1-Primera" << endl;
    cout << "2-Bussines" << endl;
    cout << "3-Economica" << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            clase = "Primera Clase";
            break;
        case 2:
            clase = "Bussines Clase";
            break;
        case 3:
            clase = "Economica Clase";
            break;
        default:
            cout << "Ingreso una clase incorrecta, vuelva a ingresar!" << endl;
            Fclase();
            break;
        return clase;
    }


}
string FaeropuertoOrigen(){
    int opcion;
    string aeropuertoOrigen;
    cout << "Escriba el aeropuerto de origen:" << endl;
    cout << "1-Bahia Blanca-BHI" << endl;
    cout << "2-Buenos Aires Aeroparque-AEP" << endl;
    cout << "3-Buenos Aires El Palomar-EPA" << endl;
    cout << "4-Buenos Aires Ezeiza-EZE" << endl;
    cout << "5-San Carlos de Bariloche-BRC" << endl;
    cout << "6-San Fernando del Valle de Catamarca-CTC" << endl;
    cout << "7-Comodoro Rivadavia-CRD" << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            aeropuertoOrigen = "Bahia Blanca-BHI";
            break;
        case 2:
            aeropuertoOrigen = "Buenos Aires Aeroparque-AEP";
            break;
        case 3:
            aeropuertoOrigen = "Buenos Aires El Palomar-EPA";
            break;
        case 4:
            aeropuertoOrigen = "Buenos Aires Ezeiza-EZE";
            break;
        case 5:
            aeropuertoOrigen = "San Carlos de Bariloche-BRC";
            break;
        case 6:
            aeropuertoOrigen = "San Fernando del Valle de Catamarca-CTC";
            break;
        case 7:
            aeropuertoOrigen = "Comodoro Rivadavia-CRD";
            break;
        default:
            cout << "Ingreso un numero erroneo, vuelva a ingresar!" << endl;
            FaeropuertoOrigen();
            break;
        return aeropuertoOrigen;
    }


}
string FaeropuertoDestino(){
    int opcion;
    string aeropuertoDestino;
    cout << "Escriba el aeropuerto de origen:" << endl;
    cout << "1-Bahia Blanca-BHI" << endl;
    cout << "2-Buenos Aires Aeroparque-AEP" << endl;
    cout << "3-Buenos Aires El Palomar-EPA" << endl;
    cout << "4-Buenos Aires Ezeiza-EZE" << endl;
    cout << "5-San Carlos de Bariloche-BRC" << endl;
    cout << "6-San Fernando del Valle de Catamarca-CTC" << endl;
    cout << "7-Comodoro Rivadavia-CRD" << endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            aeropuertoDestino = "Bahia Blanca-BHI";
            break;
        case 2:
            aeropuertoDestino = "Buenos Aires Aeroparque-AEP";
            break;
        case 3:
            aeropuertoDestino = "Buenos Aires El Palomar-EPA";
            break;
        case 4:
            aeropuertoDestino = "Buenos Aires Ezeiza-EZE";
            break;
        case 5:
            aeropuertoDestino = "San Carlos de Bariloche-BRC";
            break;
        case 6:
            aeropuertoDestino = "San Fernando del Valle de Catamarca-CTC";
            break;
        case 7:
            aeropuertoDestino = "Comodoro Rivadavia-CRD";
            break;
        default:
            cout << "Ingreso un numero erroneo, vuelva a ingresar!" << endl;
            FaeropuertoDestino();
            break;
        return aeropuertoDestino;
    }


}