/*
** Função : Número Automórfico
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observações: Este programa verifica se um número é automórfico e mostra todos os números automórficos até um determinado limite.
*/

#include <stdio.h>


int eNumeroAutomorfico(int num) {
    int quadrado = num * num;
    while (num > 0) {
        if (num % 10 != quadrado % 10) {
            return 0;
        }
        num /= 10;
        quadrado /= 10;
    }
    return 1;
}

int main() {
    int limite;
    printf("Digite um número para encontrar todos os números automórficos até ele: ");
    scanf("%d", &limite);

    printf("Números automórficos até %d:\n", limite);
    for (int i = 2; i <= limite; i++) {
        if (eNumeroAutomorfico(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

