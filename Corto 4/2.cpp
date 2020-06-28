#include <iostream>
using namespace std;

float promedio (float[]);
void udmedia(float []);

int main (){

    float arreglo[25]; 

    cout << endl << "PROGRAMA QUE CALCULA EL PROMEDIO DE ESTATURA 25 ESTUDIANTES" << endl;

    for (int i = 0; i<25; i++){
        cout << endl << "Ingrese la estatura de estudiante numero " << i+1 << ": ";
        cin >> arreglo[i];
    }
    cout << "---------------------------------------------------------";
    cout << endl << "El promedio de estatura de los 25 estudiantes es: " << promedio(arreglo) << " cm"<< endl;

    udmedia(arreglo);

    cout << endl << endl;
    return 0;
}

// CALCULO DEL PROMEDIO
float promedio (float arreglo[]){

    float suma=0, resultado;

    for (int i =0; i<25;  i++){
        suma += arreglo[i];
    }

    resultado = suma/25;

    return resultado;
}

// CALCULO DE ESTATURAS ARRIBA Y ABAJO DEL PROMEDIO, MOSTRAR RESULTADOS
void udmedia(float arreglo[]){

float prom = promedio(arreglo);
int arriba=0, abajo=0;

for (int i = 0; i<25; i++){
    if (arreglo[i]>=prom){
        arriba +=1;
    }else { abajo +=1;}
}

    if (arriba == 1){
        cout << endl << "Hay " << arriba << " estudiante arriba del promedio de estaturas.";
    }else{
        cout << endl << "Hay " << arriba << " estudiantes arriba del promedio de estaturas.";
    } 

    if (abajo == 1){
        cout << endl << endl << "Hay " << abajo << " estudiante abajo del promedio de estaturas.";
    }else{
        cout << endl << endl << "Hay " << abajo << " estudiantes abajo del promedio de estaturas.";
    } 
}