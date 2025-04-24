#include <stdio.h>

int main() {
    printf("Números divisibles entre 3 (mayores a 0 y menores a 1000):\n");
    for (int i = 3; i < 1000; i += 3) {
        printf("%d", i);
        if (i + 3 < 1000) {
            printf(", ");
        }
    }
    printf("\n\n");


    // 2. Números divisibles entre 2 y entre 7 (múltiplos de 14) mayores a 0 y menores a 1000
    printf("Números divisibles entre 2 y 7 (mayores a 0 y menores a 1000):\n");
    for (int i = 14; i < 1000; i += 14) { // 14 es el mínimo común múltiplo de 2 y 7
        printf("%d", i);
        if (i + 14 < 1000) {
            printf(", ");
        }
    }
    printf("\n\n");

    
    printf("Enteros positivos menores que 100 (omitiendo los divisibles por 7):\n");
    int primero = 1;  
    for (int i = 1; i < 100; i++) {
        if (i % 7 == 0) {
            continue;
        }
        if (primero) {
            printf("%d", i);
            primero = 0;
        } else {
            printf(", %d", i);
        }
    }
    printf("\n");

    return 0;
}