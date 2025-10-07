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
    int maximo, minimo;
    int filaMax = 0, colMax = 0;
    int filaMin = 0, colMin = 0;

    srand(time(NULL));

    cout << "Generando matriz 4x4 con números aleatorios entre 1 y 100...\n\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    maximo = minimo = matriz[0][0];

    cout << "Matriz generada:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";

            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
                filaMax = i;
                colMax = j;
            }
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
                filaMin = i;
                colMin = j;
            }
        }
        cout << endl;
    }

    cout << "\n Resultados:\n";
    cout << "Máximo: " << maximo << " en posición [" << filaMax << "][" << colMax << "]\n";
    cout << "Mínimo: " << minimo << " en posición [" << filaMin << "][" << colMin << "]\n";

    return 0;
}