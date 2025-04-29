#include <stdio.h>

int main() {
    int N, suma = 0;
    printf("Ingrese N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        suma += i;
        if (i < N) printf("+");
    }

    printf(" = %d\n", suma);
    return 0;
}
