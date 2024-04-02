#include <stdio.h>

/*
** Função : Verificar Número Feliz
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observações: Este programa verifica se um número é um número feliz.
*/

int somaQuadradosDigitos(int n) {
    int soma = 0;
    while (n != 0) {
        int digito = n % 10;
        soma += digito * digito;
        n /= 10;
    }
    return soma;
}

int ehNumeroFeliz(int n) {
    int visitados[1000] = {0}; 
    while (n != 1 && !visitados[n]) {
        visitados[n] = 1;
        n = somaQuadradosDigitos(n);
    }
    return n == 1 ? 1 : 0;
}

int main() {
    int numero;
    printf("Digite um número para verificar se é feliz: ");
    scanf("%d", &numero);

    if (ehNumeroFeliz(numero)) {
        printf("%d é um número feliz!\n", numero);
    } else {
        printf("%d não é um número feliz.\n", numero);
    }

    return 0;
}

