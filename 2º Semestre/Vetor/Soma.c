/******************************************************************************
1. Crie um programa que pergunte ao usuário o tamanho de um vetor,
leia seus elementos e, em seguida, imprima o vetor completo.
Calcule a soma desses elementos e imprima o resultado.
*******************************************************************************/
#include <stdio.h>

int main() {
    int tamanho, soma = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Declarar
    int vetor[tamanho];

    printf("Digite os %d elementos do vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Imprimir
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Calcular
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    printf("Soma dos elementos: %d\n", soma);

    return 0;
}
