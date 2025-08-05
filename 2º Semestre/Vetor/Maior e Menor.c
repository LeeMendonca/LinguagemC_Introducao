/******************************************************************************
2. Faça um programa onde o usuário deve informar o tamanho de um
vetor e seus elementos. Encontre o maior e o menor valor,
imprimindo ambos.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int tamanho=0;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    for (int i=0; i<tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]); //não esqueça do & para guardar o elemento
    }

    int maior = vetor[0];
    int menor = vetor[0];

    for (int i=0; i<tamanho; i++) {
        if (vetor[i]>maior) maior = vetor[i];
        if (vetor[i]<menor) menor = vetor[i];
    }

    printf("\nMaior: %d\nMenor: %d", maior, menor);

    return 0;
}
