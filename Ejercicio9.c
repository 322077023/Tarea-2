#include <stdio.h>

int main() 
{
    int N, i = 1;

    printf("Ingrese un numero entero: ");
    scanf("%d", &N);

    printf("Tabla de multiplicar del %d:\n", N);

    while (i <= 10) {
        printf("%d x %d = %d\n", N, i, N * i);
        i++;   // incrementar
    }

    return 0;
}
