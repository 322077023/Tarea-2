#include <stdio.h>

int main() {
    float dolares, pesos;
    float tasa = 11.96;

    printf("Ingresa la cantidad en dolares: ");
    scanf("%f", &dolares);

    pesos = dolares * tasa;

    printf("Equivalente en pesos: %.2f\n", pesos);

    return 0;
}
