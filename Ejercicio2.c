#include <stdio.h>
#define PI 3.1416

int main() {
    float radio, area, circunferencia;

    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);

    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    printf("\nArea del circulo: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);

    return 0;
}
