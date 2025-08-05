/*******************************************************************************
3. Classificação de idade: Leia a idade de uma pessoa e classifique-a.
Considere: criança(0-12), adolescente(13-17), adulto(18-59), idoso(60+).
*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade=0;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade<0)
        printf("Valor inválido.");
    else if (idade<12)
        printf("Criança.");
    else if (idade<17)
        printf("Adolescente.");
    else if (idade<59)
        printf("Adulto.");
    else if (idade>60)
        printf("Idoso.");
    
    return 0;
}
