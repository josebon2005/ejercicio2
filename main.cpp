#include <iostream>
using namespace std;

// Prototipos de funciones
void imprimirNumeros();
void imprimirHastaN();
void sumarPositivos();
void fibonacciHastaN();
void sumaHasta100();
void imprimirParesHastaN();
void calcularMedia();
void ingresarHastaCero();

int main() {
    int opcion;

    do {
        // Menú de opciones
        cout << "\n--- MENU DE EJERCICIOS ---\n";
        cout << "1. Imprimir los numeros del 1 al 20 en orden ascendente\n";
        cout << "2. Imprimir los numeros desde 1 hasta un numero ingresado\n";
        cout << "3. Sumar numeros positivos hasta ingresar un numero negativo\n";
        cout << "4. Generar la secuencia de Fibonacci hasta un numero ingresado\n";
        cout << "5. Ingresar numeros hasta que la suma sea mayor a 100\n";
        cout << "6. Imprimir todos los numeros pares hasta un numero ingresado\n";
        cout << "7. Calcular la media de una serie de numeros ingresados\n";
        cout << "8. Ingresar numeros hasta que el numero ingresado sea 0\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: imprimirNumeros(); break;
            case 2: imprimirHastaN(); break;
            case 3: sumarPositivos(); break;
            case 4: fibonacciHastaN(); break;
            case 5: sumaHasta100(); break;
            case 6: imprimirParesHastaN(); break;
            case 7: calcularMedia(); break;
            case 8: ingresarHastaCero(); break;
            case 0: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion invalida, intente de nuevo.\n";
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

// Función que suma números positivos hasta que el usuario ingrese un número negativo
void sumarPositivos() {
    int num, suma = 0;
    cout << "\nIngrese numeros positivos (ingrese un numero negativo para terminar):\n";

    while (true) {
        cin >> num;
        if (num < 0) break;  // Termina cuando se ingresa un número negativo
        suma += num;
    }

    cout << "La suma de los numeros ingresados es: " << suma << endl;
}

// Función que genera la secuencia de Fibonacci hasta un número ingresado
void fibonacciHastaN() {
    int n, a = 0, b = 1, temp;
    cout << "\nIngrese un numero para generar la secuencia de Fibonacci hasta ese numero: ";
    cin >> n;

    cout << "Secuencia de Fibonacci: ";
    while (a <= n) {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}

// Función que solicita números hasta que la suma supere 100
void sumaHasta100() {
    int num, suma = 0;
    cout << "\nIngrese numeros (la suma debe superar 100 para detenerse):\n";

    while (suma <= 100) {
        cin >> num;
        suma += num;
    }

    cout << "La suma final es: " << suma << " (superó 100).\n";
}

// Función que imprime todos los números pares hasta un número ingresado
void imprimirParesHastaN() {
    int n, i = 2;
    cout << "\nIngrese un numero: ";
    cin >> n;

    cout << "Numeros pares hasta " << n << ": ";
    while (i <= n) {
        cout << i << " ";
        i += 2;
    }
    cout << endl;
}

// Función que calcula la media de una serie de números ingresados
void calcularMedia() {
    int num, suma = 0, contador = 0;
    cout << "\nIngrese numeros para calcular la media (ingrese 0 para finalizar):\n";

    while (true) {
        cin >> num;
        if (num == 0) break;  // Termina cuando el usuario ingresa 0
        suma += num;
        contador++;
    }

    if (contador > 0) {
        double media = static_cast<double>(suma) / contador;
        cout << "La media de los numeros ingresados es: " << media << endl;
    } else {
        cout << "No se ingresaron numeros para calcular la media.\n";
    }
}

// Función que permite ingresar números hasta que el usuario ingrese 0
void ingresarHastaCero() {
    int num;
    cout << "\nIngrese numeros (ingrese 0 para finalizar):\n";

    while (true) {
        cin >> num;
        if (num == 0) {
            cout << "Se ingresó un 0. Terminando el programa.\n";
            break;
        }
    }
}
