#include <stdio.h>

int main() {
    float sueldo;
    float aumento;
    float nuevo_sueldo;

    printf("Ingrese el sueldo actual del trabajador: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000.0f) {
        aumento = sueldo * 0.15f;   
    } else {
        aumento = sueldo * 0.12f;   
    }

    nuevo_sueldo = sueldo + aumento;

    printf("El aumento es: %.2f\n", aumento);
    printf("El nuevo sueldo es: %.2f\n", nuevo_sueldo);

    return 0;
}
