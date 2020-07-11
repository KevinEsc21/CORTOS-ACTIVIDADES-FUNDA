#include <iostream>
#include <cstring>
using namespace std;

// declaracion de la estructura
const int longCad = 20;

struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
};

//decalaracion de funciones
void datosArt(costoPorArticulo[], int);

void CostxArt(costoPorArticulo[], int);

void MostrarArticulo(costoPorArticulo[], int);

float costoTotal(costoPorArticulo[], int);

int main (){

    int CantArt;

    cout << endl << "BIENVENIDO A TIENDA MARI POSA" << endl << endl;
    cout << "Ingrese la cantidad de productos a comprar: ";
    cin >> CantArt;
    if(CantArt<1){ // Termina el programa si se ingresa una cantidad menor a 1
        cout << endl << "Ingrese una cantidad valida, el minimo de productos es 1." << endl << endl;
    }else{
        
    cin.ignore(100,'\n');

    costoPorArticulo ticket[CantArt];

    datosArt(ticket, CantArt);
    
    CostxArt(ticket,CantArt);

    MostrarArticulo(ticket, CantArt);

    cout << endl << "-----------------------------------------" << endl;
    cout << "TOTAL: $" << costoTotal(ticket, CantArt) << endl << endl;
    }
    return 0;
}

//Leer los datos de los articulos
void datosArt (costoPorArticulo arreglo[], int n){

    string cadena;

    for (int i=0; i<n; i++){   
     
        cout << endl << "Ingrese los datos del articulo " << i+1<< ":" << endl;

        cout << endl << "Ingrese el nombre del articulo: ";
        getline (cin, cadena, '\n');
        strncpy(arreglo[i].nombreArticul, cadena.c_str(), longCad);
        arreglo[i].nombreArticul[longCad]='\0';

        cout << "Ingrese la cantidad del articulo: ";
        cin >> arreglo[i].cantidad;
        while(arreglo[i].cantidad<0){ //Evita que se introduzcan cantidades negativas
            cout << "Ingrese una cantidad valida: ";
            cin >> arreglo [i].cantidad;
        }

        cout << "Ingrese el precio por unidad del articulo: $";
        cin >> arreglo [i].precio;
        while(arreglo [i].precio<0){ //Evita que se introduzcan precios negativos
            cout << "Ingrese un precio valido: $";
            cin >> arreglo [i].precio;
        }
        cin.ignore(100,'\n');
    }
}

// Calcular el costo por articulo
void CostxArt(costoPorArticulo arreglo[], int n){
    for(int i=0; i<n; i++){
        arreglo[i].costoPorArticulo= arreglo[i].cantidad * arreglo[i].precio; 
    }
}

//Mostrar los articulos del arreglo
void MostrarArticulo(costoPorArticulo arreglo[], int n){

    for(int i=0; i<n; i++){
        cout << endl << "-----------------------------------------" << endl;
        cout << "Articulo numero " << i+1 << endl << endl;
        cout << "Nombre: " << arreglo[i].nombreArticul << endl;
        cout << "Cantidad: " << arreglo[i].cantidad << endl;
        cout << "Precio por unidad: $" << arreglo[i].precio << endl;
        cout << "Costo por articulo: $" << arreglo[i].costoPorArticulo;
    }
}

//Calculo del total de la compra
float costoTotal(costoPorArticulo arreglo[], int n){
    
    float suma=0;

    for(int i=0; i<n; i++){
        suma=suma+arreglo[i].costoPorArticulo;
    }

    return suma;
}