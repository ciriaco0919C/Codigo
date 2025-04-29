#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int longitud, i, j;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    longitud=strlen( palabra );

for (i = 0; i < longitud; i++) {
    
for (j = 0; j < longitud; j++) {
    printf("*");
    }
printf("\n");
}
return 0;
    }

    
