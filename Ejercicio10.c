#include <stdio.h>

int main() 
{
    int num, positivos = 0, negativos = 0, nulos = 0, i;

    for (i = 1; i <= 100; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &num);

        if (num > 0)
            positivos++;
        else if (num < 0)
            negativos++;
        else
            nulos++;
    }

    printf("\nPositivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
