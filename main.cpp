#include <iostream>
using namespace std;

void imprimirNumeros();

int main() {
    imprimirNumeros();
    return 0;
}

// Función que imprime los números del 1 al 20 en orden ascendente
void imprimirNumeros() {
    int i = 1;
    while (i <= 20) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}