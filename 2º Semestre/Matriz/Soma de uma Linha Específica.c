/******************************************************************************
3. Escreva um programa que calcule a soma dos elementos de uma
linha específica (escolhida pelo usuário) em uma matriz 4x4.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][4];
    int linha=0, soma=0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz: \n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite o nº da linha: ");
    scanf("%d", &linha);

    for (int j=0; j<4; j++) {
        soma += matriz[linha][j];
    }

    printf("Soma dos elementos: %d", soma);

    return 0;
}
