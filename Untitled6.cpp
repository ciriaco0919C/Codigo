#include <stdio.h>

int main() {
    double sueldo, x;
    int antiguedad;

printf("Ingrese su antigüedad en años: ");
  scanf("%lf", &sueldo);
      printf("Ingrese su sueldo mensual: ");
    scanf("%d", &antiguedad);

    x = (sueldo * 100) / 10;

    if (antiguedad >= 5 && x > 1000) {
        printf("Felicidades, usted puede recibir un crédito hipotecario.\n");
    } else {
        printf("Lo siento no  cumples con los  requisitos para el crédito.\n");
    }

    return 0;
}