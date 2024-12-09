#include "frecuenciaCaracteres.hpp"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void frecuenciaCaracteres(string texto){
    char masUsado = texto[0];
    int sumaPrevia = 0;
    int sumaPosterior;
    for(int i = 0; i <= texto.length() - 1 ; i++){
        sumaPosterior = 0;
        for(int j = 0; j <= texto.length() - 1 ; j++){
            if(texto[i] == texto[j]){
                sumaPosterior += 1;
            }
        }
        if(sumaPosterior > sumaPrevia){
            masUsado = texto[i];
            sumaPrevia = sumaPosterior;
        }
    }
    cout << "Caracter mas usado: " << masUsado << endl << "Fue usado " << sumaPrevia << " veces." << endl;
}