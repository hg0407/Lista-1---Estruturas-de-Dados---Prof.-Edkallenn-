/*
** Função : Potências Fatoriais
** Autor : HYGOR GABRIEL 
** Data : 24/03/2024
** Observações: Este programa calcula potências fatoriais crescentes e decrescentes.
*/

#include <stdio.h>

double potenciaFatorialCrescente(double x, int n) {
    double resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x + i);
    }
    return resultado;
}

double potenciaFatorialDecrescente(double x, int n) {
    double resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x - i);
    }
    return resultado;
}

int main() {
    double x;
    int n;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("Potência Fatorial Crescente: %.2lf\n", potenciaFatorialCrescente(x, n));

    printf("Potência Fatorial Decrescente: %.2lf\n", potenciaFatorialDecrescente(x, n));

    return 0;
}

