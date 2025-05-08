#include <stdio.h>

int main() {
    double salario , x;
    int antiguedad;
    
    printf("Ingrese su salario  mensual: ");
    scanf("%lf", &salario);
    printf("Ingrese su antigüedad en años: ");
    scanf("%d", &antiguedad);

    x = (salario * 100) / 10;
    if (antiguedad >= 5 &&x > 1000) {
        printf("Felicidades,  recibiste el  crédito hipotecario.\n");
    } else {
        printf("Lo sentimos,  NO cumples con  los requisitos para el crédito.\n");
    }

    return 0;
}