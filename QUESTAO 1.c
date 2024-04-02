/*
** Fun��o : Pot�ncias Fatoriais
** Autor : HYGOR GABRIEL 
** Data : 24/03/2024
** Observa��es: Este programa calcula pot�ncias fatoriais crescentes e decrescentes.
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
    
    printf("Pot�ncia Fatorial Crescente: %.2lf\n", potenciaFatorialCrescente(x, n));

    printf("Pot�ncia Fatorial Decrescente: %.2lf\n", potenciaFatorialDecrescente(x, n));

    return 0;
}

