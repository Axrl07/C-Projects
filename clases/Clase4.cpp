#include <iostream>

using namespace std;

int main(){
    // constantes
    const float constanteEntera = 61;
    /* lanza un error
    constanteEntera = 100; */
    float zona, examen, total;
    cout << "Ingrese la zona del estudiante: " ;
    cin >> zona;
    cout << "Ingrese la nota del examen final: " ;
    cin >> examen;
    try{
        total = zona + examen;
    } catch (int e){
        cout << "Error: " << e << endl;
        cout << "Los números ingresados deben ser números" << endl;
    }
    cout << "La nota del estudiante es: " << total << endl;
    if(total >= constanteEntera){
        cout << "El estudiante aprobo" << endl;
    }else{
        cout << "El estudiante reprobo" << endl;
    }
    return 0;
}