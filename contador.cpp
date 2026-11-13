#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string linea;
    int contador = 0;

    ifstream archivo("texto.txt");
    if (!archivo.is_open()) {
        cout << "Error: el archivo no existe." << endl;
        return 1;
    }

    while (getline(archivo, linea)) {
        contador++;
    }
    archivo.close();

    cout << "El archivo tiene " << contador << " líneas." << endl;
    return 0;
}