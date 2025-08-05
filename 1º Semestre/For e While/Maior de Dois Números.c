/******************************************************************************
4. Faça um programa que calcule e imprima o maior entre dois números.
Se os números forem iguais, imprima “Valores iguais”. (Utilize laço While)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1=0, n2=0;
    
    while (1) {
        
        printf("Digite o primeiro número: ");
        scanf("%d", &n1);
        printf("Digite o segundo número: ");
        scanf("%d", &n2);
        
        if (n1==n2)
            printf("Valores iguais.\n");
        else if (n1>n2)
            printf("%d é maior.\n", n1);
        else if (n2>n1)
            printf("%d é maior.\n", n2);
    }

    return 0;
}
