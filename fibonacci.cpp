#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

bool fibonacci(int num) {
    int x = 0, y = 1;

    while (x < num) {
        int temp = y;
        y = x + y;
        x = temp;
    }
    return y == num;
}

int main() {
    int numero;
    cout << "Digite qualquer número: "; 
    cin >> numero;

    if (fibonacci(numero)) {
        cout << numero << " pertence à sequência de Fibonacci." << "\n";
    } else {
        cout << numero << " não pertence à sequência de Fibonacci." << "\n";
    }
    return 0;
}