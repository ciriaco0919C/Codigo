#include <stdio.h>

int main() {
    int N;
    printf("Ingrese N: ");
    scanf("%d", &N);
    printf("Suma: %d\n", N * (N + 1) / 2);
    return 0;
}