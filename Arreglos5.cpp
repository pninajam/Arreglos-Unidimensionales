#include <iostream>
#include <string>
using namespace std;

void encontrarComunes(string* clase1, int tam1, string* clase2, int tam2, string* comunes, int& tamComunes) {
    tamComunes = 0;
    for (int i = 0; i < tam1; i++) {
        for (int j = 0; j < tam2; j++) {
            if (clase1[i] == clase2[j]) {
                comunes[tamComunes++] = clase1[i];
                break;
            }
        }
    }
}

int main() {
    int tam1, tam2, tamComunes;
    cout << "Numero de estudiantes en Fundamentos de Programacion: ";
    cin >> tam1;
    string* clase1 = new string[tam1];
    cout << "Ingrese los nombres de los estudiantes en Fundamentos de Programacion:\n";
    for (int i = 0; i < tam1; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> clase1[i];
    }
    cout << "Numero de estudiantes en Programacion Grafica: ";
    cin >> tam2;
    string* clase2 = new string[tam2];
    cout << "Ingrese los nombres de los estudiantes en Programacion Grafica:\n";
    for (int i = 0; i < tam2; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> clase2[i];
    }
    string* comunes = new string[min(tam1, tam2)];
    encontrarComunes(clase1, tam1, clase2, tam2, comunes, tamComunes);
    cout << "\nEstudiantes comunes en ambas clases:\n";
    for (int i = 0; i < tamComunes; i++) {
        cout << comunes[i] << endl;
    }
    cout << "Total de estudiantes comunes: " << tamComunes << endl;
    delete[] clase1;
    delete[] clase2;
    delete[] comunes;
    return 0;
}