#include <stdio.h>
int main() {
    int i;
    printf("Números divisibles entre 3 (mayores a 0 y menores a 1000):\n");
    i = 3;
    while (i < 1000) {
        printf("%d", i);
        i += 3;
        if (i < 1000) {
            printf(", ");
        }
    }
    printf("\n\n");
}