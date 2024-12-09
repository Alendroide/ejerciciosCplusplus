#include "frecuenciaCaracteres.hpp"
#include <iostream>
#include <string>
using namespace std;

int main(){
    string texto;
    cout << "Ingrese la cadena de texto: ";
    getline(cin, texto);
    cout << endl;
    frecuenciaCaracteres(texto);
}