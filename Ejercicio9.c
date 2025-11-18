#include <stdio.h>

int main() 
{
    int N, i;

    printf("Ingrese un numero entero: ");
    scanf("%d", &N);

    printf("Tabla de multiplicar del %d:\n", N);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
