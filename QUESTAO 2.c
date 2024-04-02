/*
** Fun��o : Fatorial Duplo
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observa��es: Este programa calcula e exibe o fatorial duplo e o fatorial normal de 2 at� 20, mostrando tamb�m a diferen�a entre eles.
Foi usado  O caractere \t � um caractere de escape em C+ Quando voc� o utiliza em uma string, como em "\t", ele insere um caractere de tabula��o.
*/

#include <stdio.h>

int fatorialDuplo(int n) {
    int resultado = 1;
    for (int i = n; i >= 2; i -= 2) {
        resultado *= i;
    }
    return resultado;
}

int fatorialNormal(int n) {
    int resultado = 1;
    for (int i = n; i >= 1; i--) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    const int tamanho = 20; 

    // Os resultados em uma tabela!
    printf("n\tFatorial Duplo\tFatorial Normal\tDiferenca\n");
    for (int i = 2; i <= tamanho; i++) {
        int fatorialDuploResultado = fatorialDuplo(i);
        int fatorialNormalResultado = fatorialNormal(i);
        int diferenca = fatorialNormalResultado - fatorialDuploResultado;
        printf("%d\t%d\t\t%d\t\t%d\n", i, fatorialDuploResultado, fatorialNormalResultado, diferenca);
    }

    return 0;
}
