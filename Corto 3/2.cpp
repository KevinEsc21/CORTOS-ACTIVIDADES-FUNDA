#include <iostream>
using namespace std;
void numeromagico(int, int);

int main (){
    int nmagico=36, n;
    cout << endl << "NUMERO MAGICO" << endl << endl;
    cout << "Intenta adivinar el numero magico!" << endl << endl;
    cout << "Tiene solamente cinco intentos para poder adivinar el numero"<< endl << endl;
    cout << "OJO: si ingresa un numero fuera del rango tendra un intento menos" << endl << endl;
    
    numeromagico (nmagico, n);

    return 0;
}

// Definiendo nuestra función

void numeromagico(int nmagico, int n){

     int i = 1;
     while(i<=5){

        cout << "--------------------------------------------------------------" << endl;
        cout << "Intentos restantes: " << 6-i << endl << endl;
        cout << "ingresa un numero entre 0 a 100: ";
        cin >> n;

    // condiciones respecto al numero ingresado
        if (n>100 || n<0) {
            i+=1;
            cout << endl << "Se te ha penalizado con un intento, no vuelvas a hacerlo." << endl;
        }else if (n>nmagico){
            cout << endl << "te fuiste muy alto, que tal si intentas con un numero menor?" << endl;
        }else if(n<nmagico && n>0){
            cout << endl << "te fuiste muy bajo, que tal si intentas con un numero mayor?" << endl;
        } else if (n==nmagico){
            cout << endl << "Excelente! encontraste el numero magico" << endl << endl;
            break;  
        }
        if (n==0){
            cout << endl<< "Gracias por jugar" << endl << endl;
            break;
        }
        i+=1;
     }
     if (i>5) {
         cout << "--------------------------------------------------------------" << endl;
         cout<< "Lastimosamente te quedaste sin intentos :(" << endl << endl;
     }
}

