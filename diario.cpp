#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string frase, linea;

    cout << "escribe una frase: ";
    getline(cin, frase);

    ofstream salida("diario.txt", ios::app);
    salida << frase << endl;
    salida.close();

    ifstream entrada("diario.txt");
    while (getline(entrada, linea)) {
        cout << linea << endl;
    }
    entrada.close();

    return 0;
}