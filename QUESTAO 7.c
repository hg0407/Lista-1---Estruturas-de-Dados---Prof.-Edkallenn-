#include <stdio.h>

/*
** Fun��o : Verificar N�mero Feliz
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observa��es: Este programa verifica se um n�mero � um n�mero feliz.
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
    printf("Digite um n�mero para verificar se � feliz: ");
    scanf("%d", &numero);

    if (ehNumeroFeliz(numero)) {
        printf("%d � um n�mero feliz!\n", numero);
    } else {
        printf("%d n�o � um n�mero feliz.\n", numero);
    }

    return 0;
}

