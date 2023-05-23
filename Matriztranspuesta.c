#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Construir un porgrama en c en donde el usuario defina las dimensiones de una matriz, 
//el programa llena la matriz con números aleatorios entre 0 y 100 y luego calcule la matriz 
//transpuesta. el programa debe imprimir la matriz original y la matriz transpuesta.

int main() {
    int filas, columnas;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz[100][100];
    srand(time(NULL));

    // Llenar la matriz con números aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101;
        }
    }
    // Imprimir la matriz original
    printf("\nMatriz Original:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcular la matriz transpuesta
    int transpuesta[100][100];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
    // Imprimir la matriz transpuesta
    printf("\nMatriz Transpuesta:\n");
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }

        return 0;
}
