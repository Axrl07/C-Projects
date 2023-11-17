#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>  //Para linux #include<unistd.h>

using namespace std;

int main(){
    char user[5], pass[3];
    bool ingreso = false;

    while(ingreso != true){
        cout<<"ingrese el nombre de usuario"<<endl;
        cin>>user;
        cout<<"ingrese la contraseña"<<endl;
        cin>>pass;
        if(strcmp(user,"angel")){
            if(strcmp(pass,"123")){
                ingreso = true;
            }else{
                system("cls"); //Para linux system("clear");
                cerr<<"contraseña incorrecta"<<endl;
                Sleep(2000);
            }
        }else{
            system("cls"); //Para linux system("clear");
            cerr<<"usuario incorrecta"<<endl;
            Sleep(2000);
        }
    };
    cout<<"bienvenido "<<"angel"<<endl;
    return 0;
};