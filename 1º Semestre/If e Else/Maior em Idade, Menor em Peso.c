/**********************************************
5. Calcule a maior idade entre duas entradas e
o menor peso entre outras duas entradas.
**********************************************/
    
#include <stdio.h>

int main()
{
    int idade1, idade2;
    float peso1, peso2;
    
    // Calculando as idades:
    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);
    
    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);
    
    if (idade1>idade2)
        printf("A primeira pessoa é mais velha, tem %d anos.\n\n", idade1);
    else if (idade1<idade2)
        printf("A segunda pessoa é mais velha, tem %d anos.\n\n", idade2);
    else
        printf("Ambas tem a mesma idade.\n\n");
    
    // Calculando os pesos:   
    printf("Digite o peso da primeira pessoa: ");
    scanf("%f", &peso1);
    
    printf("Digite o peso da segunda pessoa: ");
    scanf("%f", &peso2);
    
    if (peso1<peso2)
        printf("A primeira pessoa é mais leve, tem %.1fkg.", peso1);
    else if (peso1>peso2)
        printf("A segunda pessoa é mais leve, tem %.1fkg.", peso2);
    else
        printf("Ambas tem o mesmo peso.");

    return 0;
}
