#include <stdio.h>

int main() 
{
    int arr[100];
    int i;

    for (i = 0; i < 100; i++) {
        arr[i] = (i + 1) * 2;
    }

    printf("Los primeros 100 numeros pares:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
