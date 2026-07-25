# Definición de las dimensiones globales para las matrices (2 filas y 3 columnas)
FILAS = 2
COLUMNAS = 3


def completar_matriz(filas_columnas):  # Solicita al usuario los valores para llenar una matriz de tamaño FILAS x COLUMNAS.
   
    # Crea una matriz con las dimensiones especificadas
    matriz = [[0 for _ in range(COLUMNAS)] for _ in range(FILAS)]
    print(f"Ingrese los datos de la matriz {filas_columnas}:")
    
    # Recorre cada posición (fila y columna) para pedir el valor al usuario
    for i in range(FILAS):
        for j in range(COLUMNAS):
            matriz[i][j] = int(input(f"Elemento [{i}][{j}]: "))
            
    return matriz


def suma_matriz(m1, m2):  # Suma dos matrices elemento por elemento.
   
    return [[m1[i][j] + m2[i][j] for j in range(COLUMNAS)] for i in range(FILAS)]


def resta_matriz(m1, m2): # Resta la segunda matriz de la primera elemento por elemento.
    
    return [[m1[i][j] - m2[i][j] for j in range(COLUMNAS)] for i in range(FILAS)]


def multiplicacion_matriz(m1, m2):
    """
    Nota: Realiza una multiplicación elemento a elemento (Hadamard),
    no una multiplicación matricial algebraica tradicional.
    """
    return [[m1[i][j] * m2[i][j] for j in range(COLUMNAS)] for i in range(FILAS)]


def mostrar_resultado(matriz, operacion):
    """Imprime en pantalla la matriz resultante de una operación en formato tabular."""
    print(f"\nResultado de {operacion}:")
    for i in range(FILAS):
        for j in range(COLUMNAS):
            print(matriz[i][j], end="\t")
        print()


def main(): # Función principal que coordina la entrada de datos, operaciones y salida.
    # Se solicitan las matrices A y B al usuario
    A = completar_matriz('A')
    B = completar_matriz('B')

    # Se realizan las operaciones correspondientes
    res_suma = suma_matriz(A, B)
    res_resta = resta_matriz(A, B)
    res_mult = multiplicacion_matriz(A, B)

    # Se muestran los resultados en pantalla
    mostrar_resultado(res_suma, "Suma")
    mostrar_resultado(res_resta, "Resta")
    mostrar_resultado(res_mult, "Multiplicacion")


if __name__ == "__main__":
    main()
