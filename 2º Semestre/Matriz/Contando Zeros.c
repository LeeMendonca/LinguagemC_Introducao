/******************************************************************************
6. Desenvolva um programa que conte o número de zeros
em uma matriz 3x3.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3], count=0;

    //Criando
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimindo
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Contando zeros
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (matriz[i][j] == 0 ) count++;
        }
    }
    printf("\nEssa matriz possui %d zeros!", count);


    return 0;
}
