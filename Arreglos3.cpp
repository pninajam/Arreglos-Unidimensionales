#include <iostream>
using namespace std;

int main() {
    const int dias = 7;
    float tempMin[dias], tempMax[dias];
    float tempMedia[dias];
    float tempInput;
    for (int i = 0; i < dias; i++) {
        cout << "Ingrese la temperatura minima del dia " << i + 1 << ": ";
        cin >> tempMin[i];
        cout << "Ingrese la temperatura maxima del dia " << i + 1 << ": ";
        cin >> tempMax[i];
        tempMedia[i] = (tempMin[i] + tempMax[i]) / 2.0;
    }
    cout << "\nTemperatura media de cada dia:\n";
    for (int i = 0; i < dias; i++) {
        cout << "dia " << i + 1 << ": " << tempMedia[i]<< endl;
    }
    int diaMenorTemp = 0;
    for (int i = 1; i < dias; i++) {
        if (tempMin[i] < tempMin[diaMenorTemp]) {
            diaMenorTemp = i;
        }
    }
    cout << "\nEl dia con menor temperatura minima es el dia " << diaMenorTemp + 1 << " con " << tempMin[diaMenorTemp];
    cout << "\nIngrese una temperatura para buscar los dias con esa temperatura maxima: ";
    cin >> tempInput;
    bool encontrado = false;
    cout << "dias con temperatura maxima de " << tempInput << ":\n";
    for (int i = 0; i < dias; i++) {
        if (tempMax[i] == tempInput) {
            cout << "dia " << i + 1 << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontro ningún dia con esa temperatura maxima.\n";
    }
    return 0;
}