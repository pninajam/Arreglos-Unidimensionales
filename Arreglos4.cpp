#include <iostream>
using namespace std;

void llenarArregloConMultiplos(int* arreglo, int tamano, int numero) {
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = numero * (i + 1);
    }
}

int main() {
    int n, x;
    cout << "Tamano del arreglo: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Numero para los multiplos: ";
    cin >> x;
    llenarArregloConMultiplos(arr, n, x);
    cout << "Elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}