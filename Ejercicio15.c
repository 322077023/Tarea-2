#include <stdio.h>

int main() 
{
    int N, i, positivos = 0, negativos = 0, nulos = 0;

    printf("Tamano del arreglo: ");
    scanf("%d", &N);

    int arr[N];

    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positivos++;
        else if (arr[i] < 0)
            negativos++;
        else
            nulos++;
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
