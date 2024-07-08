#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce el numero de elementos: ";
    cin >> n;
    int A[n];
    int pares[n];
    int impares[n];
    int paresCount = 0;
    int imparesCount = 0;

    for(int i = 0; i < n; i++) {
        cout << "Introduce el elemento " << i+1 << ": ";
        cin >> A[i];
        if(A[i] % 2 == 0) {
            pares[paresCount] = A[i];
            paresCount++;
        } else {
            impares[imparesCount] = A[i];
            imparesCount++;
        }
    }
    cout << "Elementos pares: ";
    for(int i = 0; i < paresCount; i++) {
        cout << pares[i] << " ";
    }
    cout << endl;
    cout << "Elementos impares: ";
    for(int i = 0; i < imparesCount; i++) {
        cout << impares[i] << " ";
    }
    cout << endl;
    return 0;
}