#include <stdio.h>

int main() 
{
    int a, b;

    printf("Introduce el primer numero entero: ");
    scanf("%d", &a);

    printf("Introduce el segundo numero entero: ");
    scanf("%d", &b);

    if (b % a == 0) {
        printf("%d es divisor de %d\n", a, b);
    } 
    else if (a % b == 0) {
        printf("%d es divisor de %d\n", b, a);
    } 
    else {
        printf("Ninguno es divisor del otro\n");
    }

    return 0;
}
