/******************************************************************************
8. Faça um programa que multiplique todos os elementos de uma
matriz 2x2 por um número escalar fornecido pelo usuário.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][2], n=0;

    //Criando
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimindo
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) printf("%d ", matriz[i][j]);
        printf("\n");
    }

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            matriz[i][j] *= n;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
