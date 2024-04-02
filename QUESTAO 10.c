#include <stdio.h>

/*
** Fun��o : Fibonacci com Restri��o M�xima
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observa��es: Este programa gera a s�rie de Fibonacci at� um n�mero m�ximo.
*/

void fibonacci_max(int max) {
    int a = 0, b = 1, c;
    int fib_array[100]; // Aloca��o est�tica do array
    int i = 0;

    while (a <= max) {
        fib_array[i++] = a;
        c = a + b;
        a = b;
        b = c;
    }
    fib_array[i] = -1; 

    printf("S�rie de Fibonacci at� %d:\n", max);
    for (int j = 0; fib_array[j] != -1; j++) {
        printf("%d ", fib_array[j]);
    }
    printf("\n");
}

int main() {
    int max;
    printf("Digite o n�mero m�ximo para a s�rie de Fibonacci: ");
    scanf("%d", &max);

    fibonacci_max(max);

    return 0;
}

