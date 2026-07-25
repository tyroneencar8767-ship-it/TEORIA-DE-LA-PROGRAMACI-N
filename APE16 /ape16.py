FILAS = 2
COLUMNAS = 3


def completar_matriz(filas_columnas):
    matriz = [[0 for _ in range(COLUMNAS)] for _ in range(FILAS)]
    print(f"Ingrese los datos de la matriz {filas_columnas}:")
    for i in range(FILAS):
        for j in range(COLUMNAS):
            matriz[i][j] = int(input(f"Elemento [{i}][{j}]: "))
    return matriz


def suma_matriz(m1, m2):
    return [[m1[i][j] + m2[i][j] for j in range(COLUMNAS)] for i in range(FILAS)]


def resta_matriz(m1, m2):
    return [[m1[i][j] - m2[i][j] for j in range(COLUMNAS)] for i in range(FILAS)]


def multiplicacion_matriz(m1, m2):
    return [[m1[i][j] * m2[i][j] for j in range(COLUMNAS)] for i in range(FILAS)]


def mostrar_resultado(matriz, operacion):
    print(f"\nResultado de {operacion}:")
    for i in range(FILAS):
        for j in range(COLUMNAS):
            print(matriz[i][j], end="\t")
        print()


def main():
    A = completar_matriz('A')
    B = completar_matriz('B')

    res_suma = suma_matriz(A, B)
    res_resta = resta_matriz(A, B)
    res_mult = multiplicacion_matriz(A, B)

    mostrar_resultado(res_suma, "Suma")
    mostrar_resultado(res_resta, "Resta")
    mostrar_resultado(res_mult, "Multiplicacion")


if __name__ == "__main__":
    main()
