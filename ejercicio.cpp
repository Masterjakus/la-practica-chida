// matriz identidad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int tamaño;
    cout << "De qué tamaño desea la matriz -> ";
    cin >> tamaño;

    if (tamaño <= 0) {
        cout << "El tamaño debe ser un número positivo." << endl;
        return 1;
    }

    int** mat = new int* [tamaño];
    for (int c = 0; c < tamaño; c++) {
        mat[c] = new int[tamaño];
    }

    for (int c = 0; c < tamaño; c++) {
        for (int i = 0; i < tamaño; i++) {
            if (c == i) {
                mat[c][i] = 1;
            }
            else {
                mat[c][i] = 0;
            }
        }
    }

    for (int c = 0; c < tamaño; c++) {
        for (int i = 0; i < tamaño; i++) {
            cout << mat[c][i] << " ";
        }
        cout << endl;
    }

    return 0;
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
