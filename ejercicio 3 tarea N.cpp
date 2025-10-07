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
    int pares = 0, impares = 0;

    srand(time(NULL));

    cout << "Generando matriz 4x4 con números aleatorios entre 1 y 50...\n\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 50 + 1;
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 == 0)
                pares++;
            else
                impares++;
        }
    }

    cout << "\n Resultados:" << endl;
    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;

    cout << "\n Pares: ";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 == 0)
                cout << matriz[i][j] << " ";
        }
    }

    cout << "\n Impares: ";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] % 2 != 0)
                cout << matriz[i][j] << " ";
        }
    }

    cout << "\n\n ya jalo.\n";

    return 0;
}
