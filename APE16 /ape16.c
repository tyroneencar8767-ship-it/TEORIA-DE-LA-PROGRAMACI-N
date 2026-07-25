#include <stdio.h>

#define FILAS 2
#define COLUMNAS 3

// 
void completarMatrices(int matriz[FILAS][COLUMNAS], char nombre);
void sumaMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]);
void restaMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]);
void multiplicacionMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]);
void mostrarResultado(int matriz[FILAS][COLUMNAS], char operacion[]);
int main();

// main
int main() {
    int A[FILAS][COLUMNAS], B[FILAS][COLUMNAS];
    int resSuma[FILAS][COLUMNAS], resResta[FILAS][COLUMNAS], resMult[FILAS][COLUMNAS];

    completarMatrices(A, 'A');
    completarMatrices(B, 'B');

    sumaMatriz(A, B, resSuma);
    restaMatriz(A, B, resResta);
    multiplicacionMatriz(A, B, resMult);

    mostrarResultado(resSuma, "Suma");
    mostrarResultado(resResta, "Resta");
    mostrarResultado(resMult, "Multiplicacion");

    return 0;
}

// completarMatrices
void completarMatrices(int matriz[FILAS][COLUMNAS], char nombre) {
    printf("Ingrese los datos de la matriz %c:\n", nombre);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// sumaMatriz
void sumaMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLUMNAS; j++)
            res[i][j] = m1[i][j] + m2[i][j];
}

// restaMatriz
void restaMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLUMNAS; j++)
            res[i][j] = m1[i][j] - m2[i][j];
}

// multiplicacionMatriz
void multiplicacionMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLUMNAS; j++)
            res[i][j] = m1[i][j] * m2[i][j];
}

// mostrarResultado
void mostrarResultado(int matriz[FILAS][COLUMNAS], char operacion[]) {
    printf("\nResultado de %s:\n", operacion);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
