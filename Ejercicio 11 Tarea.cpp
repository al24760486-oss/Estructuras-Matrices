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
    int sumaPrincipal = 0;
    int sumaSecundaria = 0;

    srand(time(NULL));

    cout << "Matriz 4x4 con valores aleatorios entre 1 y 9:\n\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 9 + 1;
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n Diagonal Principal: ";
    for (int i = 0; i < n; i++) {
        cout << matriz[i][i] << " ";
        sumaPrincipal += matriz[i][i];
    }

    cout << "\nSuma Diagonal Principal = " << sumaPrincipal << endl;

    cout << "\n Diagonal Secundaria: ";
    for (int i = 0; i < n; i++) {
        cout << matriz[i][n - 1 - i] << " ";
        sumaSecundaria += matriz[i][n - 1 - i];
    }

    cout << "\nSuma Diagonal Secundaria = " << sumaSecundaria << endl;

    return 0;
}