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
    int A[4][4], B[4][4], C[4][4];

    srand(time(NULL));

    cout << "Generando matrices A y B con números aleatorios entre 1 y 50...\n\n";

    cout << "Matriz A:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = rand() % 50 + 1;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            B[i][j] = rand() % 50 + 1;
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "\n Matriz C = A - B:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}