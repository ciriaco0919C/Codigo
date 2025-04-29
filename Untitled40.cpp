#include <stdio.h>

int main() {
    int i, j, N;
    
    printf("Ingresa el  número de asterocos : ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
         for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n"); 
    }
printf("\n");

for (i = N; i > 0; i--) { 
        for (j = 0; j < i; j++) {  
            printf("*");
        }
        printf("\n"); 
    }
    system("pause");
    return 0;
}