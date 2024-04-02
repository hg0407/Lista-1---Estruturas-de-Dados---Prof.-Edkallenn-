#include <stdio.h>
#include <stdlib.h>

/*
** Função: permutacao_circular
** ----------------------------
** Verifica se um array de inteiros é uma permutação circular de outro array.
** Autor : HYGOR GABRIEL
** Data : 24/03/2024
** Observações:  arr1: o primeiro array de inteiros
** arr2: o segundo array de inteiros
** size: o tamanho dos arrays
** Retorna 1 se arr1 é uma permutação circular de arr2, 0 caso contrário.
*/
int permutacao_circular(int arr1[], int arr2[], int size) {
    
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < size; j++) {
            if (arr1[i] == arr2[j]) {
                break;
            }
        }
        
        if (j == size) {
            return 0;
        }
    }

   
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[(i + 1) % size]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int size;
    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &size);

    int *arr1 = (int *)malloc(size * sizeof(int));
    int *arr2 = (int *)malloc(size * sizeof(int));

    printf("Digite os elementos do primeiro array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Digite os elementos do segundo array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    
    if (permutacao_circular(arr1, arr2, size)) {
        printf("O primeiro array é uma permutação circular do segundo array.\n");
    } else {
        printf("O primeiro array NÃO é uma permutação circular do segundo array.\n");
    }

    return 0;
}

