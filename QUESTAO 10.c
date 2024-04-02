#include <stdio.h>

/*
** Função : Fibonacci com Restrição Máxima
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observações: Este programa gera a série de Fibonacci até um número máximo.
*/

void fibonacci_max(int max) {
    int a = 0, b = 1, c;
    int fib_array[100]; // Alocação estática do array
    int i = 0;

    while (a <= max) {
        fib_array[i++] = a;
        c = a + b;
        a = b;
        b = c;
    }
    fib_array[i] = -1; 

    printf("Série de Fibonacci até %d:\n", max);
    for (int j = 0; fib_array[j] != -1; j++) {
        printf("%d ", fib_array[j]);
    }
    printf("\n");
}

int main() {
    int max;
    printf("Digite o número máximo para a série de Fibonacci: ");
    scanf("%d", &max);

    fibonacci_max(max);

    return 0;
}

