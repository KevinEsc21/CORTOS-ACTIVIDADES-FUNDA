#include <iostream>
using namespace std;
bool abisiesto(int);

int main (){

    int year;

    cout << endl;
    cout << "PROGRAMA QUE INDICA SI UN ANO ES BISIESTO" << endl << endl;
    cout << "Ingrese el ano: ";
    
    cin >> year;

    //Imprimir en pantalla si es bisiesto o no
    if (abisiesto(year) == 0){
        cout << endl << "El ano no es es bisiesto" << endl << endl;
    }else {
        cout << endl << "El ano es bisiesto" << endl << endl;
    } 
   
}

// Definiendo nuestra funcion
bool abisiesto(int a){

bool bisiesto;

    //condiciones que determinan si es bisiesto o no
    if (a % 400 == 0){
        bisiesto = true;
    } else if (a % 4 == 0 && a % 100 != 0){
        bisiesto = true;
    }else {
        bisiesto = false;
    }
    
    return bisiesto;
}