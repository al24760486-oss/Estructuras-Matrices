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
    int suma = 0;
    double promedio;
    
    srand(time(NULL));

    cout << "Generando matriz 4x4 con números aleatorios entre 1 y 50...\n\n";

    cout << "Matriz generada:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 50 + 1;
            cout << matriz[i][j] << "\t";
            suma += matriz[i][j];
        }
        cout << endl;
    }


    promedio = suma / 20.0;

    cout << "\n Resultados:\n";
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}