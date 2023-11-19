#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>  //Para linux #include<unistd.h>

using namespace std;

int main(){
    char user[15], pass[15];
    bool ingreso = false;
    while (ingreso != true){
        system("cls");
        cout << "ingrese usuario: " << endl;
        cin >> user;
        cout << "ingrese password: " << endl;
        cin >> pass;
        if (strcmp(user, "progra") == 0){
            if (strcmp(pass, "123") == 0){
                ingreso = true;
                system("cls");
                cout << "Bienvenido al Curso" << endl;
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
};