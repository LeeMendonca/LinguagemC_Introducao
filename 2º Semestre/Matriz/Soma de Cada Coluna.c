/******************************************************************************
7. Implemente um programa que calcule e imprima a soma dos
elementos de cada coluna em uma matriz 3x3.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3], soma[3];

    //Criando
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimindo
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) printf("%d ", matriz[i][j]);
        printf("\n");
    }

    for (int j=0; j<3; j++) {
        for (int i=0; i<3; i++) {
            soma[j]+= matriz[i][j];
        }
        printf("Soma da coluna %d: %d\n", j, soma[j]);
    }
/* Para entender essa lógica pensa em na matriz como matriz = [[1,2,3], [4,5,6]].
Assim, por exemplo, para cada j=1 (2 e 5), fazemos a soma.
E fazemos a soma em todos as posições de j em i.
Lembre: os blocos menores são j e o bloco maior é i,
Assim que se forma a matriz, i.e., o vetor de vetores. */

    return 0;
}
