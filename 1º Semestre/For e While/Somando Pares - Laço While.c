/******************************************************************************
6. Crie um programa que calcule a soma dos números pares de 1 a 100 usando
um loop "while".
*******************************************************************************/
#include <stdio.h>

int main()
{
    int soma=0, i=1;
    
    while(i<=100)
    {
        if (i%2==0)
            soma += i;
        i++;

    }
    printf("A soma dos números pares de 1 a 100 é igual a %d.", soma);

    return 0;
}
