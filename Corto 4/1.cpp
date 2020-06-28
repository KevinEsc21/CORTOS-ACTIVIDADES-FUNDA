#include <iostream>
#include <string.h>
using namespace std;
char codificar(char[], int);

int main (){

    char arreglo[100];

    cout << endl << "PROGRAMA CODIFICADOR DE CLAVE MURCIELAGO";
    cout << endl << endl << "Ingrese lo que quiere codificar: ";
    //Para que tome tambien los espacios como caracteres se hace de esta manera
    cin.getline(arreglo,100);
    
    cout << endl << "Su mensaje codificado es: ";

    //Recorrer las posiciones de arreglo para codificar y luego mostrar cada caracter
    for (int i=0; i<strlen(arreglo); i++){
        arreglo[i] = codificar(arreglo, i);
        cout << arreglo[i];
    }
    cout << endl << endl;
    return 0;
}

//Funcion para determinar la codificacion de los caractreres del arreglo
char codificar(char c[], int i){

        if ( c[i]== 'm'|| c[i]=='M' )
            return '0';
            if ( c[i]== 'u'|| c[i]=='U' )
                return '1';
                if ( c[i]== 'r'|| c[i]=='R' )
                    return '2';
                    if ( c[i]== 'c'|| c[i]=='C' )
                        return '3';\
                        if ( c[i]== 'i'|| c[i]=='I' )
                            return '4';
                            if ( c[i]== 'e'|| c[i]=='E' )
                                return '5';
                                if ( c[i]== 'l'|| c[i]=='L' )
                                    return '6';
                                    if ( c[i]== 'a'|| c[i]=='A' )
                                        return '7';
                                        if ( c[i]== 'g'|| c[i]=='G' )
                                            return '8';
                                            if ( c[i]== 'o'|| c[i]=='O' )
                                                return '9';
    return c[i];
      
}
