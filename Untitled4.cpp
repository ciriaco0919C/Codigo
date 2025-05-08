#include <iostream>

using namespace std;

int main() {
    double sueldo, x;
    int antiguedad;

    // Solicitar datos al usuario
    cout << "Ingrese su sueldo mensual: ";
    cin >> sueldo;
    cout << "Ingrese su antigüedad en años: ";
    cin >> antiguedad;

    // Calcular el 10% del sueldo
    x = (sueldo * 100) / 10;

    // Verificar si cumple con los requisitos
    if (antiguedad >= 5 && x > 1000) {
        cout << "Felicidades, usted es sujeto a crédito hipotecario." << endl;
    } else {
        cout << "Lo sentimos, usted NO cumple los requisitos para el crédito." << endl;
    }

    return 0;
}