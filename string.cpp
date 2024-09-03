#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int contar(string texto) {
    int contador = 0;
    for (char c : texto) {
        if (c == 'a' || c == 'A') {
            contador++;
        }
    }
    return contador;
}

int main() {
    string texto;
    cout << "Digite algo: ";
    getline(cin, texto);

    int quantidade = contar(texto);
    cout << "A letra 'a' aparece " << quantidade << " vezes." << "\n";
    return 0;
}