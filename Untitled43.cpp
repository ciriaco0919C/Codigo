#include <stdio.h>
#include <string.h>

void imprimirLinea(int n) {
    if (n > 0) {
        printf("*");
        imprimirLinea(n - 1);
    } else {
        printf("\n");
    }
}

void imprimirCuadrado(int n, int contador) {
    if (contador > 0) {
        imprimirLinea(n);
        imprimirCuadrado(n, contador - 1);
    }
}

int main() {
    char palabra[100];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    int n = strlen(palabra);

    if (n > 0) {
        imprimirCuadrado(n, n);
    }

    return 0;
}