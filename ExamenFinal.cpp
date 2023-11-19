#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>
#include <vector>
// #include<unistd.h> esta biblioteca trabaja para sistemas operativos de Unix, Linux
using namespace std;


// vector (casi como una clase)
struct Producto {
    string nombre;
    double precio;
};

void mostrarProductos(vector<Producto> vector){
    cout << "Productos del carrito: " << endl;
    cout << "posición  -  nombre producto  -  precio producto" << endl;
    for(int i = 0; i < vector.size(); i++){
        cout << i << " - " << vector[i].nombre << " Q" << vector[i].precio << endl;
    }
};

void MenuPrincipal(){
    char opcion;
    vector<Producto> carrito;
    do{
        cout << "\n";
        cout << "Menu Principal" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Mostrar productos" << endl;
        cout << "3. Quitar producto" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion){
            case '1':{
                cout << "\n";
                Producto nuevoProducto;
                cout << "Ingrese nombre del producto: " << endl;
                cin >> nuevoProducto.nombre;
                cout << "Ingrese precio del producto: " << endl;
                cin >> nuevoProducto.precio;
                carrito.push_back(nuevoProducto);
                break;
            }
            case '2':{
                cout << "\n";
                mostrarProductos(carrito);
                break;
            }
            case '3':{
                cout << "\n";
                int posicionProducto;
                mostrarProductos(carrito);
                cout << "Ingrese el numero del producto a quitar: ";
                cin >> posicionProducto;
                carrito.erase(carrito.begin() + posicionProducto);
                break;
            }
            case '4':{
                cout << "\n";
                cout << "Hasta luego, vuelva pronto!" << endl;
                break;
            }
            default:{
                cout << "\n";
                cout << "Opcion invalida, por favor vuelva a intentarlo" << endl;
                break;
            }
        }
    }while(opcion != '4');
}

int main(){
    // HANDLE hConsole : permite el uso de la linea no. 27 y 39
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char user[15], pass[15];
    bool ingreso = false;
    while (ingreso != true){
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
        system("cls");
        cout << "ingrese usuario: " << endl;
        cin >> user;
        cout << "ingrese password: " << endl;
        cin >> pass;
        if (strcmp(user, "progra") == 0){
            if (strcmp(pass, "123") == 0){
                ingreso = true;
                system("cls");
                system("Color 1E");
                MenuPrincipal();
            }else{
                system("cls");
                cerr << "ERROR, Password incorrecto" << endl;
                Sleep(2000);
            }
        }else{
            // system cls sistema de operativo windows/ linux system("clear")
            system("cls");
            // cerr se utiliza para mensajes de errores
            cerr << "ERROR, Usuario incorrecto" << endl;
            Sleep(2000);
        }
    }
    return 0;
}