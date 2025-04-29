#include <stdio.h>

int main() {
    int A;
    printf("Ingrese A: ");
    scanf("%d", &A);
    
    for (int i = 0; i < 4; i++, A += 3)
        printf("%d\t%d\t%d\t%d\n", A, A+2, A+4, A+6);

    return 0;
}