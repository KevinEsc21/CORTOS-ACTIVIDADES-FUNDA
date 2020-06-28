#include <iostream>
using namespace std;
void llenarmatriz(float[][5], int);
void calculonota(float[][5], int);

int main (){

    int n;

    cout << endl << "SISTEMA DE NOTAS DE ESTUDIANTES" << endl << endl;
    cout << "Ingrese la cantidad de estudiantes para calcular sus notas: ";
    cin >> n;

    float notas[n][5];

    llenarmatriz(notas,n);
    cout << "--------------------------------------------------------------------" << endl;
    calculonota(notas, n);

    return 0;
}

// Llenar la matriz
void llenarmatriz(float a[][5], int n){
    for (int i=0; i< n; i++){
        cout << "-------------------------------------------------------------" << endl;
        cout << "Notas del estudiante " << i+1 << endl << endl; 
        for (int j=0; j<5; j++){
            cout << "Ingrese la nota numero " << j+1 << ": ";
            cin >> a[i][j]; 
        }
    }
}

// Nota final, aprobados y reprobados
void calculonota(float a[][5], int n){
    

    for(int i=0; i<n;i++){
        float notafinal=0;
        for(int j=0; j<5; j++){
            notafinal+= a[i][j]*0.20;
        }
        cout << "La nota final del estudiante " << i+1 << " es: " << notafinal;
        if (notafinal<6.0)
            cout << ", ha reprobado la meteria.";
            else cout << ", ha aprobado la materia.";
        cout << endl << endl;
    }
}
