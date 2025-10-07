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
    int filasA = 2, columnasA = 3;
    int filasB = 3, columnasB = 2;

    if (columnasA != filasB) {
        cout << "Error: No se pueden multiplicar las matrices.\n";
        cout << "Las columnas de A deben ser iguales a las filas de B.\n";
        return 0;
    }

    int A[2][3], B[3][2], C[2][2];

    srand(time(NULL));

    cout << "Generando matrices A y B con números aleatorios entre 1 y 10...\n\n";

    cout << "Matriz A (" << filasA << "x" << columnasA << "):\n";
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasA; j++) {
            A[i][j] = rand() % 10 + 1;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "\nMatriz B (" << filasB << "x" << columnasB << "):\n";
    for (int i = 0; i < filasB; i++) {
        for (int j = 0; j < columnasB; j++) {
            B[i][j] = rand() % 10 + 1;
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            for (int k = 0; k < columnasA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMatriz C = A × B (" << filasA << "x" << columnasB << "):\n";
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n Multiplicación completada.\n";
    return 0;
}