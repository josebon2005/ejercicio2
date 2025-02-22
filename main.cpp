#include <iostream>
using namespace std;

// Prototipos de funciones
void imprimirNumeros();
void imprimirHastaN();

int main() {
    int opcion;

    do {
        // Menú de opciones
        cout << "\n--- MENU DE EJERCICIOS ---\n";
        cout << "1. Imprimir los numeros del 1 al 20 en orden ascendente\n";
        cout << "2. Imprimir los numeros desde 1 hasta un numero ingresado\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                imprimirNumeros();
            break;
            case 2:
                imprimirHastaN();
            break;
            case 0:
                cout << "Saliendo del programa...\n";
            break;
            default:
                cout << "Opcion invalida, intente de nuevo.\n";
        }

    } while (opcion != 0);

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

// Función que imprime los números desde 1 hasta el número ingresado por el usuario
void imprimirHastaN() {
    int n, i = 1;
    cout << "\nIngrese un numero: ";
    cin >> n;

    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}
