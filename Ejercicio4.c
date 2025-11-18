#include <stdio.h>

int main() 
{
    float capital;
    float tasa;      
    float interes;
    float monto;

    printf("Calculo de monto al final del mes\n");

    printf("Ingrese la cantidad a invertir: ");
    scanf("%f", &capital);

    printf("Ingrese la tasa de interes mensual (en %%): ");
    scanf("%f", &tasa);

    interes = capital * tasa / 100.0f;

    monto = capital + interes;

    printf("El monto al final del mes es: %.2f\n", monto);

    return 0;
}
