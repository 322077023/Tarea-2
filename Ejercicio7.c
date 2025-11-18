#include <stdio.h>

int main() 
{
    float distancia_ida;
    int dias;
    float distancia_total;
    float precio_base;
    float descuento;
    float precio_final;

    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distancia_ida);

    printf("Ingrese el numero de dias de estancia: ");
    scanf("%d", &dias);

    distancia_total = distancia_ida * 2.0f;       
    precio_base = distancia_total * 0.23f;        

    if (dias > 7 && distancia_total > 800.0f) {
        descuento = precio_base * 0.30f;          
    } else {
        descuento = 0.0f;
    }

    precio_final = precio_base - descuento;

    printf("Distancia total: %.2f km\n", distancia_total);
    printf("Precio base: %.2f\n", precio_base);
    printf("Descuento: %.2f\n", descuento);
    printf("Precio final del ticket: %.2f\n", precio_final);

    return 0;
}
