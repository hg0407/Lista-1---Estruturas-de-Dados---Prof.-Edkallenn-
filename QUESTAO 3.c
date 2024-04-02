/*
** Função : Soma de Divisores Amigáveis
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observações: Este programa verifica se dois números são amigáveis e encontra todos os pares de números amigáveis até um determinado limite.
*/

#include <stdio.h>

int somaDivisores(int num) {
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

void verificarAmigaveis(int num1, int num2) {
    int soma1 = somaDivisores(num1);
    int soma2 = somaDivisores(num2);

    printf("Divisores de %d: ", num1);
    for (int i = 1; i <= num1 / 2; i++) {
        if (num1 % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\nSoma dos divisores de %d: %d\n", num1, soma1);

   
    printf("Divisores de %d: ", num2);
    for (int i = 1; i <= num2 / 2; i++) {
        if (num2 % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\nSoma dos divisores de %d: %d\n", num2, soma2);

    
    if (soma1 == num2 && soma2 == num1) {
        printf("%d e %d são números amigáveis.\n", num1, num2);
    } else {
        printf("%d e %d não são números amigáveis.\n", num1, num2);
    }
}

// Função para encontrar todos os pares de números amigáveis até n
void encontrarAmigaveisAte(int n) {
    printf("Pares de números amigáveis até %d:\n", n);
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (somaDivisores(i) == j && somaDivisores(j) == i) {
                printf("%d e %d\n", i, j);
            }
        }
    }
}

int main() {
    int num1, num2, limite;

    printf("Digite dois números para verificar se são amigáveis: ");
    scanf("%d %d", &num1, &num2);

    verificarAmigaveis(num1, num2);

    printf("\nDigite um limite para encontrar todos os pares de números amigáveis: ");
    scanf("%d", &limite);

    encontrarAmigaveisAte(limite);

    return 0;
}
