#include <stdio.h>
#include <math.h>

/*
** Fun��o : Verificar N�mero de Armstrong
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observa��es: Este programa verifica se um n�mero � um n�mero de Armstrong.
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
        return 1; // � um n�mero de Armstrong
    } else {
        return 0; // N�o � um n�mero de Armstrong
    }
}

int main() {
    int numero;

    do {
        printf("Digite um n�mero entre 1 e 100: ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 100);

    printf("N�meros de Armstrong at� %d:\n", numero);
    for (int i = 1; i <= numero; i++) {
        if (ehNumeroArmstrong(i)) {
            printf("%d � um n�mero de Armstrong.\n", i);
        } else {
            printf("%d n�o � um n�mero de Armstrong.\n", i);
        }
    }

    return 0;
}

