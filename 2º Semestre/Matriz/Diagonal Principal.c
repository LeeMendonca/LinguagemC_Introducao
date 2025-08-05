/******************************************************************************
4. Implemente um programa que imprima os elementos da diagonal
principal de uma matriz 3x3.

Obs: A Diagonal Principal começa no primeiro elemento (matriz[0][0])
*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];

    printf("Monte uma matriz 3x3!\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) printf("%d", matriz[i][j]);
        printf("\n");
    }

    printf("\nDiagonal Principal:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (i==j) {
                printf("%d", matriz[i][j]);
            } else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
