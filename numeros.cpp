#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, suma = 0;

    ofstream salida("numeros.txt");
    for (int i = 0; i < 5; i++) {
        cout << "numero: ";
        cin >> n;
        salida << n << endl;
    }
    salida.close();

    ifstream entrada("numeros.txt");
    while (entrada >> n) {
        suma += n;
    }
    entrada.close();

    cout << "la suma es: " << suma << endl;
    return 0;
}