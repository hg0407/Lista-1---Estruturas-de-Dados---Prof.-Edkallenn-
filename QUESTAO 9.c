#include <stdio.h>

/*
** Função : Verificar Número Perfeito
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observações: Este programa verifica se um número é um número perfeito.
*/


int eh_numero_perfeito(int num) {
    int soma_divisores = 0;

   
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma_divisores += i;
        }
    }

   
    if (soma_divisores == num) {
        return 1; // Verdadeiro (é um número perfeito)
    } else {
        return 0; // Falso (não é um número perfeito)
    }
}

int main() {
    printf("Números perfeitos entre 1 e 100000:\n");
    for (int i = 1; i <= 100000; i++) {
        if (eh_numero_perfeito(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

