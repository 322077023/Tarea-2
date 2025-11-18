#include <stdio.h>

int main() 
{
    int N, i, suma = 0;

    printf("Ingrese el tamano del arreglo: ");
    scanf("%d", &N);

    int arr[N];

    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
        suma += arr[i];
    }

    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}
