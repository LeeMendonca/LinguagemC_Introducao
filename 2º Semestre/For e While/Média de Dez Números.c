/******************************************************************************
6. Escreva um programa que calcule a média de 10 números
fornecidos pelo usuário usando um loop "for".
*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp=0, soma=0;
    double media=0.0;

    for (int i=1; i<=10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &temp);

        soma+=temp;
    }

    media = (double)soma/10.0; //Conversão explícita
    printf("Média: %.2f", media);

    return 0;
}
