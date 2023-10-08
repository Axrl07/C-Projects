#include <iostream>

using namespace std;

int main(){
    // tipos de numeros
    int numeroEntero = 10;
    float numeroFlotante = 15.5;
    double numeroDouble = 5.5;

    // tipos de texto
    char caracter = 'a';
    string cadenaDeCaracteres = "Hola mundo";

    // tipos de valores logicos
    bool booleanoPositivo = true;
    bool booleanoNegativo = false;

    // imprimir variables
    cout << numeroEntero << endl;
    /*
    cout << var << endl;
    abrimos << Impresion << salto de linea
    */
    cout << numeroFlotante << endl;
    cout << numeroDouble << endl;
    cout << caracter << endl;
    cout << cadenaDeCaracteres << endl;
    /*
    cout << var1 << var2 << endl;
    abrimos << ImpresionVar1 << ImpresionVar2 << salto de linea
    */
    cout << "true " << booleanoPositivo << endl;
    cout << "false " << booleanoNegativo << endl;
    return 0;
}