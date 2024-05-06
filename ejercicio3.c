// Nicole Mena Porras C14663 Ejercicio 3

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

#define MAX_SIZE 10 

int findLargestSquare(int matrix[][MAX_SIZE], int n) {
 
    int dp[MAX_SIZE][MAX_SIZE] = {0};
    int maxSize = 0; 

    for (int i = 0; i < n; i++) {
        dp[0][i] = matrix[0][i];
        dp[i][0] = matrix[i][0];
        if (dp[0][i] == 1 || dp[i][0] == 1) {
            maxSize = 1; 
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 1) {

                dp[i][j] = 1 + ((dp[i - 1][j] < dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1]);
                dp[i][j] = (dp[i][j] < dp[i - 1][j - 1]) ? dp[i][j] : dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxSize) {
                    maxSize = dp[i][j];
                }
            } else {
                dp[i][j] = 0; 
            }
        }
    }

    return maxSize;
}

// funcion principal:
int main() {
    int n;

    printf("Ingrese el número de filas de la matriz nxn (entre 1 y %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n < 1 || n > MAX_SIZE) {
        printf("Número válido, se va a usar tamaño por defecto, es decir: 5\n");
        n = 5;
    }

    srand(time(NULL));

    int matrix[MAX_SIZE][MAX_SIZE];

    printf("La matriz utilizada corresponde a:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 2;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int largestSquareSize = findLargestSquare(matrix, n);
    printf("El tamaño del cuadrado más grande de unos es: %dx%d\n", largestSquareSize, largestSquareSize);

    return 0;
}

// fin del codigo
