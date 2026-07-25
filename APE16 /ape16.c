#include <stdio.h>

// Definición de las dimensiones constantes para las matrices (2 filas y 3 columnas)
#define FILAS 2
#define COLUMNAS 3

// Prototipos de las funciones utilizadas en el programa
void completarMatrices(int matriz[FILAS][COLUMNAS], char nombre);
void sumaMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]);
void restaMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]);
void multiplicacionMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]);
void mostrarResultado(int matriz[FILAS][COLUMNAS], char operacion[]);
int main();

// Función principal que coordina la entrada de datos, operaciones y salida
int main() {
    // Declaración de las matrices A y B, y las matrices para almacenar los resultados
    int A[FILAS][COLUMNAS], B[FILAS][COLUMNAS];
    int resSuma[FILAS][COLUMNAS], resResta[FILAS][COLUMNAS], resMult[FILAS][COLUMNAS];

    // Se solicitan los valores para llenar las matrices A y B
    completarMatrices(A, 'A');
    completarMatrices(B, 'B');

    // Se ejecutan las operaciones de suma, resta y multiplicación elemento a elemento
    sumaMatriz(A, B, resSuma);
    restaMatriz(A, B, resResta);
    multiplicacionMatriz(A, B, resMult);

    // Se muestran en pantalla los resultados obtenidos de cada operación
    mostrarResultado(resSuma, "Suma");
    mostrarResultado(resResta, "Resta");
    mostrarResultado(resMult, "Multiplicacion");

    return 0;
}

// Función para solicitar al usuario los valores y llenar una matriz específica
void completarMatrices(int matriz[FILAS][COLUMNAS], char nombre) {
    printf("Ingrese los datos de la matriz %c:\n", nombre);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Función que calcula la suma de dos matrices y almacena el resultado
void sumaMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLUMNAS; j++)
            res[i][j] = m1[i][j] + m2[i][j];
}

// Función que calcula la resta de dos matrices y almacena el resultado
void restaMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLUMNAS; j++)
            res[i][j] = m1[i][j] - m2[i][j];
}

// Función que realiza la multiplicación elemento a elemento (Hadamard) y almacena el resultado
void multiplicacionMatriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int res[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < COLUMNAS; j++)
            res[i][j] = m1[i][j] * m2[i][j];
}

// Función para imprimir en formato tabular la matriz resultante de una operación
void mostrarResultado(int matriz[FILAS][COLUMNAS], char operacion[]) {
    printf("\nResultado de %s:\n", operacion);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
