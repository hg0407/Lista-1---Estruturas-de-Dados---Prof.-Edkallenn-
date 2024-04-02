/*
** Fun��o : N�mero Autom�rfico
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observa��es: Este programa verifica se um n�mero � autom�rfico e mostra todos os n�meros autom�rficos at� um determinado limite.
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
    printf("Digite um n�mero para encontrar todos os n�meros autom�rficos at� ele: ");
    scanf("%d", &limite);

    printf("N�meros autom�rficos at� %d:\n", limite);
    for (int i = 2; i <= limite; i++) {
        if (eNumeroAutomorfico(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

