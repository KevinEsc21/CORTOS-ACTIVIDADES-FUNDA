#include <iostream>
using namespace std;

void calculosalarios(int, int);

int main (){
    
    int numempleados, hnormales, hextras;

    cout << endl;
    cout << "CALCULO DEL SALARIO MENSUAL DE LOS EMPLEADOS";
    cout << endl << endl << "Ingrese la cantidad de empleados: ";
    cin >> numempleados;
    cout << endl;

  //lazo para repetir el calculo de los salarios de N trabajadores

    for (int i = 1; i<=numempleados; i++){
        cout << "----------------------------------------" << endl << endl;
        cout << "Ingrese los datos del empleado numero " << i;
        cout << endl << endl << "Ingrese las horas normales trabajadas: ";
        cin >> hnormales;
        cout << endl << "Ingrese las horas extras trabajadas: ";
        cin >> hextras;
        cout << endl;
        calculosalarios(hnormales,hextras);
    }

    return 0;
}

//Definiiendo la función
void calculosalarios(int hnormales, int hextras){
    
    //Salario total
    float salariototal, segurosocial, AFP, renta, totaldescuento,salariocondescuento;

    salariototal= (hnormales*1.75)+(hextras*2.50);

    //Definiendo los descuentos
    segurosocial = salariototal*0.04;
    AFP = salariototal*0.0625;
    if (salariototal >= 500){
        renta = salariototal*0.10;
    }else{
        renta = 0;
    }

    //Salio real
    salariocondescuento = salariototal-segurosocial-AFP-renta;

    cout << "Su salario total es: $" << salariototal << endl << endl;
    cout << "Su salario real con descuentos aplicados es: $" << salariocondescuento << endl << endl; 

}