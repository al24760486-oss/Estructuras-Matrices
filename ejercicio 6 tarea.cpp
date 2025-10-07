/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int matriz[4][4];
    int sumaFilas[4] = {0};
    int sumaColumnas[4] = {0};

    srand(time(NULL));

    cout << "Generando matriz 4x4 con números aleatorios entre 1 y 50...\n\n";

    cout << "Matriz generada:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 50 + 1;
            cout << matriz[i][j] << "\t";

            sumaFilas[i] += matriz[i][j];
            sumaColumnas[j] += matriz[i][j];
        }
        cout << endl;
    }

    cout << "\nSuma por filas:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Fila " << i << ": " << sumaFilas[i] << endl;
    }

    cout << "\nSuma por columnas:\n";
    for (int j = 0; j < 4; j++) {
        cout << "Columna " << j << ": " << sumaColumnas[j] << endl;
    }

    return 0;
}