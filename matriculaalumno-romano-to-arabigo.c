/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int roman_to_int(char simbolo) {
    switch (simbolo) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int roman_to_arabic(const char *romano) {
    int total = 0;
    int valor_actual, valor_siguiente;

    while (*romano) {
        valor_actual = roman_to_int(*romano);
        valor_siguiente = roman_to_int(*(romano + 1));

        if (valor_actual < valor_siguiente) {
            total += (valor_siguiente - valor_actual);
            romano += 2;
        } else {
            total += valor_actual;
            romano++;
        }
    }

    return total;
}

int main() {
    char entrada[50];

    printf("Escribe un número romano (en mayúsculas): ");
    scanf("%s", entrada);

    if (strlen(entrada) == 0) {
        printf("No ingresaste ningún valor.\n");
        return 1;
    }

    int resultado = roman_to_arabic(entrada);
    printf("El número arábigo es: %d\n", resultado);

    return 0;
}