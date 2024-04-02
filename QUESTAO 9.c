#include <stdio.h>

/*
** Fun��o : Verificar N�mero Perfeito
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observa��es: Este programa verifica se um n�mero � um n�mero perfeito.
*/


int eh_numero_perfeito(int num) {
    int soma_divisores = 0;

   
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma_divisores += i;
        }
    }

   
    if (soma_divisores == num) {
        return 1; // Verdadeiro (� um n�mero perfeito)
    } else {
        return 0; // Falso (n�o � um n�mero perfeito)
    }
}

int main() {
    printf("N�meros perfeitos entre 1 e 100000:\n");
    for (int i = 1; i <= 100000; i++) {
        if (eh_numero_perfeito(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

