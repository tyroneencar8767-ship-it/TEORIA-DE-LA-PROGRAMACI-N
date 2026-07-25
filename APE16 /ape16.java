import java.util.Scanner;

public class OperacionesMatrices {
    // Definición de las dimensiones globales para las matrices (2 filas y 3 columnas)
    static final int FILAS = 2;
    static final int COLUMNAS = 3;
    static Scanner scanner = new Scanner(System.in);

    /**
     * Solicita al usuario los valores para llenar una matriz de tamaño FILAS x COLUMNAS.
     */
    public static int[][] completar_matriz(char nombreMatriz) {
        int[][] matriz = new int[FILAS][COLUMNAS];
        System.out.println("Ingrese los datos de la matriz " + nombreMatriz + ":");
        
        // Recorre cada posición (fila y columna) para pedir el valor al usuario
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                System.out.print("Elemento [" + i + "][" + j + "]: ");
                matriz[i][j] = scanner.nextInt();
            }
        }
        return matriz;
    }

    /**
     * Suma dos matrices elemento por elemento.
     */
    public static int[][] suma_matriz(int[][] m1, int[][] m2) {
        int[][] resultado = new int[FILAS][COLUMNAS];
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                resultado[i][j] = m1[i][j] + m2[i][j];
            }
        }
        return resultado;
    }

    /**
     * Resta la segunda matriz de la primera elemento por elemento.
     */
    public static int[][] resta_matriz(int[][] m1, int[][] m2) {
        int[][] resultado = new int[FILAS][COLUMNAS];
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                resultado[i][j] = m1[i][j] - m2[i][j];
            }
        }
        return resultado;
    }

    /**
     * Realiza una multiplicación elemento a elemento
     */
    public static int[][] multiplicacion_matriz(int[][] m1, int[][] m2) {
        int[][] resultado = new int[FILAS][COLUMNAS];
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                resultado[i][j] = m1[i][j] * m2[i][j];
            }
        }
        return resultado;
    }

    /**
     * Imprime en pantalla la matriz resultante de una operación en formato tabular.
     */
    public static void mostrar_resultado(int[][] matriz, String operacion) {
        System.out.println("\nResultado de " + operacion + ":");
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                System.out.print(matriz[i][j] + "\t");
            }
            System.out.println();
        }
    }

    /**
     * Función principal que coordina la entrada de datos, operaciones y salida.
     */
    public static void main(String[] args) {
        // Se solicitan las matrices A y B al usuario
        int[][] A = completar_matriz('A');
        int[][] B = completar_matriz('B');

        // Se realizan las operaciones correspondientes
        int[][] res_suma = suma_matriz(A, B);
        int[][] res_resta = resta_matriz(A, B);
        int[][] res_mult = multiplicacion_matriz(A, B);

        // Se muestran los resultados en pantalla
        mostrar_resultado(res_suma, "Suma");
        mostrar_resultado(res_resta, "Resta");
        mostrar_resultado(res_mult, "Multiplicacion");
        
        scanner.close();
    }
}
