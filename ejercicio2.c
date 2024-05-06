// Nicole Mena Porras C14663 Ejercicio 2
#include <stdio.h>

// se define el factorial
int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i *= n;
        n--;
    }
    return i;
}

// funcion main

int main() {
    int n;

    printf("escoja un numero para el factorial, por favor: ");
    scanf("%d", &n);

    int fac = factorial(n);
    
    printf("%d! = %d\n", n, fac);
    
    return 0;
}

// fin del codigo
