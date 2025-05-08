
#include <stdio.h>

int main() {
    double sueldo, x;
    int antiguedad;
  printf("Ingrese su sueldo mensual: ");
   scanf("%lf", &sueldo);
   
 printf("Ingrese su antigüedad en años: ");


 
  
    scanf("%d", &antiguedad);
    x = (sueldo * 10) / 100;
    if (antiguedad >= 5 && x > 1000) {
        printf("Felicidades, aprobaste el   crédito hipotecario.\n");
    } else {
        printf("Lo sentimos,   no  aprobo  los requisitos para el crédito.\n");
    }

    return 0;
}