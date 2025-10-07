/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int matriz[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = 0;
        }
    }

    cout << "Matriz 4x4 inicializada en 0:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    