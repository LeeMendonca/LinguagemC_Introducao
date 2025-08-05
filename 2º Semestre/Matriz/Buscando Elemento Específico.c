/******************************************************************************
5. Crie um programa que verifique se um dado elemento
(fornecido pelo usuário) está presente em uma matriz 2x2.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][2], n=0, presente=0;

    // Constrindo a matriz
    printf("Monte a matriz!\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimindo
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) printf("%d ", matriz[i][j]);
        printf("\n");
    }

    printf("Digite um número: ");
    scanf("%d", &n);

    // Procurando n
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            if (matriz[i][j] == n) {
                presente=1;
                break;
            }
        }
    }

    if (presente==1) printf("Está presente!");
    else printf("Não está presente.");

    return 0;
}
