/******************************************************************************
5. Crie um programa que calcule a soma dos números pares de 1 a 100 usando
um loop "for".
*******************************************************************************/
#include <stdio.h>

int main()
{
    int soma=0;
    
    for (int i=0; i<=100; i+=2)
    {
        soma += i;
        printf("%d\n", soma);
    }

    printf("A soma dos números pares de 1 a 100 é igual a %d.", soma);

    return 0;
}
