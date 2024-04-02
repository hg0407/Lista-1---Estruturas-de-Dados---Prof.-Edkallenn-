/*
** Função : Fatorial Duplo
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observações: Este programa calcula e exibe o fatorial duplo e o fatorial normal de 2 até 20, mostrando também a diferença entre eles.
Foi usado  O caractere \t é um caractere de escape em C+ Quando você o utiliza em uma string, como em "\t", ele insere um caractere de tabulação.
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
