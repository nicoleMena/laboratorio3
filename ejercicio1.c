// Nicole Mena Porras C14663
#include <stdio.h>
// funcion main para resolver el primer ejercicio de los numeros triangulares
int main() {
    int n = 100; 
    int numeroEstriangular = 0;

    printf("Los primeros 100 números triangulares son los siguientes: \n");
    
// Se aplica ciclo for

    for (int i = 1; i <= n; i++) {
        numeroEstriangular += i; 
        printf("%d ", numeroEstriangular);
    }

    printf("\n");
    return 0;
}
// fin del ejercicio 1
