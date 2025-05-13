#include <stdio.h>
#include "factorial.h"

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    int result = factorial(n);

    if (result == -1)
        printf("No se puede calcular el factorial de un número negativo.\n");
    else
        printf("El factorial de %d es %d\n", n, result);

    return 0;
}
