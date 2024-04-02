#include <stdio.h>
#include <math.h>

/*
** Função : Verificar Número de Armstrong
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observações: Este programa verifica se um número é um número de Armstrong.
*/

int contarDigitos(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int ehNumeroArmstrong(int n) {
    int numero = n;
    int soma = 0;
    int digitos = contarDigitos(n);

    while (n != 0) {
        int digito = n % 10;
        soma += pow(digito, digitos);
        n /= 10;
    }

    if (soma == numero) {
        return 1; // É um número de Armstrong
    } else {
        return 0; // Não é um número de Armstrong
    }
}

int main() {
    int numero;

    do {
        printf("Digite um número entre 1 e 100: ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 100);

    printf("Números de Armstrong até %d:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (ehNumeroArmstrong(i)) {
            printf("%d é um número de Armstrong.\n", i);
        } else {
            printf("%d não é um número de Armstrong.\n", i);
        }
    }

    return 0;
}

