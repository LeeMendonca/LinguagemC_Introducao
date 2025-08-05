/******************************************************************************
2. Faça um programa que retorne o resultado do somatório abaixo,
sendo n o parâmetro de entrada.

n(somatório)i=1 (5*i² + 2*i + 8)
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0, soma=0, termo=0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        termo = (5*(i*i)) + (2*i) + 8;
        soma += termo;
    }

    printf("O resultado do somatório é: %d", soma);

    return 0;
}
