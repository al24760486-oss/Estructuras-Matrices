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
    const int filas = 3;
    const int columnas = 4;
    int A[filas][columnas];
    int AT[columnas][filas];

    srand(time(NULL));

    cout << "matriz A (" << filas << "x" << columnas << ") con valores aleatorios:\n\n";

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            A[i][j] = rand() % 10 + 1;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            AT[j][i] = A[i][j];
        }
    }

    cout << "\n Matriz Transpuesta (" << columnas << "x" << filas << "):\n\n";
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << AT[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}