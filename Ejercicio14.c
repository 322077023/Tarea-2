#include <stdio.h>

int main() 
{
    int N, buscar, i, contador = 0;

    printf("Tamano del arreglo: ");
    scanf("%d", &N);

    int arr[N];

    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Ingrese el numero a buscar: ");
    scanf("%d", &buscar);

    for (i = 0; i < N; i++) {
        if (arr[i] == buscar) {
            contador++;
        }
    }

    printf("El numero %d aparece %d veces.\n", buscar, contador);

    return 0;
}
