/******************************************************************************
7. Faça um programa para imprimir todos os números entre 1 e 100,
exceto aqueles divisíveis por 9.
*******************************************************************************/
#include <stdio.h>

int main()
{
    for (int i=1; i<=100; i++) {
        if (i%9!=0) {
            printf("%d ", i);
        }
        if (i%10==0) {
            printf("\n");
        }
    }

    return 0;
}
