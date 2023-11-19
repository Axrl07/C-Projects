#include <iostream>
#include <string>
using namespace std;

int main(){
    // longitud de cadena de texto
    string numeroString = "100";
    cout << "El número de digitos del número " << numeroString << " es " << numeroString.length() << endl;

    //acceso a cadenas
    cout << "cambio de nombres por caracteres y arreglos" << endl;
    string nombre = "lucia";
    cout << "el nombre " << nombre << " ";
    nombre[0] = 'm';
    nombre[1] = 'a';
    nombre[2] = 'r';
    cout << "cambió a " << nombre << endl;

    return 0;
}