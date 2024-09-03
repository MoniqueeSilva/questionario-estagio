#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int indice = 12, soma = 0, k = 1;
    
    while (k < indice) {
        soma = soma + k;
        k = k + 1;
    }

    cout << "A soma dos números de 1 até " << indice - 1 << " é: " << soma << "\n";
    return 0;
}