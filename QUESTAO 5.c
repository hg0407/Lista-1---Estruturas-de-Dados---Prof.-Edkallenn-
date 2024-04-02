#include <stdio.h>

/*
** Fun��o : Soma de Fatoriais Inversos
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observa��es: Este programa calcula a soma dos fatoriais inversos at� um determinado termo.
*/

int fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        int fat = 1;
        for (int i = 2; i <= num; i++) {
            fat *= i;
        }
        return fat;
    }
}

double soma_fatoriais_inversos(int n) {
    double soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / fatorial(i);
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um n�mero inteiro positivo para calcular a soma dos fatoriais inversos: ");
    scanf("%d", &n);

    double resultado = soma_fatoriais_inversos(n);
    printf("A soma dos fatoriais inversos at� %d �: %.10lf\n", n, resultado);

    return 0;
}

