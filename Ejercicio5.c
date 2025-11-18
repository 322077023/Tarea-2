#include <stdio.h>

int main() 
{
    float compra;
    float descuento;
    float pagar;

    printf("Descuento en tienda de electrodomesticos\n");
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 2500) {
        descuento = compra * 0.08f;   // 8% de la compra
        pagar = compra - descuento;
    } else {
        descuento = 0.0f;
        pagar = compra;
    }

    printf("Descuento aplicado: %.2f\n", descuento);
    printf("Total a pagar: %.2f\n", pagar);

    return 0;
}
