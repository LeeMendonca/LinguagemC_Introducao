/******************************************************************************
Trabalhando com vetor:
- Preencher (usuário);
- Imprimir;
- Maior valor;
- Soma total;
- Pares;
*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, v[10], maior, soma=0;
    
    for (i=0; i<10; i++)
    {
        printf("Digite o valor do v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    maior = v[0];
    printf("\nVetor: ");
    for (i=0; i<10; i++)
    {
        printf("%d ", v[i]);
        if (maior < v[i])
            maior = v[i];
        soma += v[i];
    }
    
    printf("\n\nMaior: %d\n\n", maior);
    printf("Soma: %d\n\n", soma);
    
    printf("Pares: ");
    for (i=0; i<10; i++)
    {
        if (v[i]%2==0)
            printf("%d      ", v[i]);
    }
    
    return 0;
}
