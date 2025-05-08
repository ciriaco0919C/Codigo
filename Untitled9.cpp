
#include <stdio.h>

int main() {
    float horasTrabajadas, precioHora, salario;
    
    printf("Ingrese las horas semanales trabajadas: ");
    scanf("%f", &horasTrabajadas);
    
    printf("Ingrese el precio por hora: ");
    scanf("%f", &precioHora);
    if (horasTrabajadas <= 40) {
        salario = horasTrabajadas * precioHora;
    } else {
        salario = (40 * precioHora) + ((horasTrabajadas - 40) * precioHora * 1.5);
    }
    printf("El salario semanal es: %.2f\n", salario);

    return 0;
}