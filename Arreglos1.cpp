#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce el número de elementos: ";
    cin >> n;
    int A[n];
    int suma = 0;
    int conteoCeros = 0;

    for(int i = 0; i < n; i++) {
        cout << "Introduce el elemento " << i+1 << ": ";
        cin >> A[i];
        suma += A[i];
        if(A[i] == 0) {
            conteoCeros++;
        }
    }
    double porcentajeCeros = (double)conteoCeros/n * 100;
    cout << "Sumatoria de todos los elementos: " << suma << endl;
    cout << "Porcentaje de valores cero ingresados: " << porcentajeCeros << "%" << endl;
    return 0;
}