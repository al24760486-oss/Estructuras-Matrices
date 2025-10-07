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
    const int n = 4;
    int matriz[n][n];
    int buscar;
    bool encontrado = false;

    srand(time(NULL));

    cout << "Matriz 4x4 con valores aleatorios entre 1 y 9:\n\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 9 + 1;
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nIngresa un número a buscar (1-9): ";
    cin >> buscar;

    cout << "\nBuscando el número " << buscar << "...\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == buscar) {
                cout << "Encontrado en posición [" << i << "][" << j << "]\n";
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "El número " << buscar << " no se encuentra en la matriz.\n";
    }

    cout << "\nBusqueda finalizada.\n";
    return 0;
}